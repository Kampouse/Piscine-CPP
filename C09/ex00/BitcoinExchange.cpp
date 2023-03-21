#include "BitcoinExchange.hpp"
#include <array>
#include <map>
#include <utility>
const char *BitcoinExchange::DataBaseReadError::what() const throw() {
  return ("could not be accessed");
}
BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(std::string filename,
                                 std::string file_request) {
  this->database_filname = filename;
  this->request_filename = file_request;
  this->data = read_data_base();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) { *this = copy; }
BitcoinExchange::~BitcoinExchange(void) {}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
  this->database_filname = copy.database_filname;
  this->data = copy.data;
  return (*this);
}
std::map<std::string, float> BitcoinExchange::read_data_base(void) {
  std::map<std::string, float> output;
  int time = 0;
  this->status = 0;
  std::ifstream infile(this->database_filname.c_str());

  std::string line;
  if (!infile) {
    this->status = 1;
    return output;
  }

  std::string date, btc_value;
  while (std::getline(infile, line)) {
    std::stringstream ss(line);
    std::getline(ss, date, ',');
     if( time == 1){
      this->min_date = atof(date.c_str());
    time++;
     }
    time++;
    std::getline(ss, btc_value, ',');
    float value = atof(btc_value.c_str());
     if(atoi(date.c_str()) > this->max_date)
		{
			this->max_date = atof(date.c_str());
		}



    output[date] = value;
  }
  return output;
}
//split year  month day int 3 parts in a std::array
static std::array<std::string, 3> split_date(std::string date) {
  std::array<std::string, 3> output;
  std::stringstream ss(date);
  std::string year, month, day;
  std::getline(ss, year, '-');
  std::getline(ss, month, '-');
  std::getline(ss, day, '-');
  output[0] = year;
  output[1] = month;
  output[2] = day;
  return output;
}
std::pair<std::string,float> BitcoinExchange::find_closest(std::pair <std::string,float> input) {
  std::array<std::string, 3> date_parts = split_date(input.first);
  std::string year = date_parts[0];
  std::string month = date_parts[1];
  std::string day = date_parts[2];
  int year_int = atoi(year.c_str());
  int month_int = atoi(month.c_str());
  int day_int = atoi(day.c_str());
  std::string year_str = std::to_string(year_int);
  std::string month_str = std::to_string(month_int);
  std::string day_str = std::to_string(day_int);
  if(day_int < 10) {
    day_str = "0" + day_str;
  }
  if(month_int < 10) {
    month_str = "0" + month_str;
  }
  //check in the rest of the  month if the day is valid
   for( int i = day_int; i >  0; i--) {
    std::string day_str = std::to_string(i);
    if(i < 10) {
      day_str = "0" + day_str;
    }
    std::string output_str = std::string(year_str + "-" + month_str + "-" + day_str);
    if(this->data[output_str] != 0) {
       return std::make_pair(output_str, this->data[output_str]);
    }
     if(i == 1 ){
       i = 32;
        month_int--;
         if( month_int  == 0) {
           month_int = 12;
           year_int--;
         }
          std::string month_str = std::to_string(month_int);
          std::string year_str = std::to_string(year_int);
          std::string day_str = std::to_string(i);
          std::string output_str = std::string(year_str + "-" + month_str + "-" +  day_str);
         return find_closest(std::make_pair(output_str, this->data[output_str]));
           
     }
      if(year_int < this->min_date) {
        break;
    }
	 if(year_int >  this->max_date) {
      year_int = this->max_date;
		}
   }
  return std::make_pair("0", 0);
}
static std::string &rtrim(std::string &s) {
  s.erase(std::find_if(s.rbegin(), s.rend(),
                       std::not1(std::ptr_fun<int, int>(std::isspace)))
              .base(),
          s.end());
  return s;
}
void BitcoinExchange::printer(std::string &input, float value) {
	 
	 if(  input  == "date")
		return;

     std::pair<std::string , float> closest;
    const std::array<std::string, 3> date_parts = split_date(input);
    const std::string year = date_parts[0];
      if (value <= 0 || value > 1000) {
		if(input == ""   )
			return;
      std::cout << "invalid date or value provided" <<  std::endl;
	  return;
    }
  if(this->data.find(input) == this->data.end()) {
	std::cout << input <<   "-<" << std::endl;
  closest =    find_closest(std::make_pair(input, this->data[input]));
   std::cout << closest.first << std::endl;
  if(closest.second == 0) {
    std::cout << "bad input provided " << input <<   std::endl;
    return;
  }
    std::cout << input << "=> " << value << " = " << closest.second * value  << std::endl;
   return ; 

  }

	  if (this->data[input] == 0) {
      std::map<std::string,float>::iterator stuff =   this->data.find(input);
      if(stuff != this->data.end())
      {
            std::cout << input << "=> " << value << " = " << stuff->second * value  << std::endl;
            return;
      }
            closest  = find_closest( std::make_pair(input, this->data[input]));
            if(closest.second == 0) {
              std::cout << "bad input provided" <<  std::endl;
            }
            else if(closest.second != 0)
            std::cout << input << "=> " << value << " = " << closest.second * value  << std::endl;
    }
    else {
      std::cout << input << "=> " << value << " = " << this->data[input] * value << std::endl;
    }
}
std::map<std::string, float> BitcoinExchange::read_request(void) {
  std::map<std::string, float> output;
  std::ifstream infile(this->request_filename.c_str());
  std::string line;
  if (!infile) {
    this->status = 1;
    return output;
  }
  this->status = 0;
  while (std::getline(infile, line)) {
    std::stringstream ss(line);
    std::string date, btc_value;
    std::getline(ss, date, '|');
    std::getline(ss, btc_value, '|');
    float value = atof(btc_value.c_str());
    date = rtrim(date);
    printer(date, value);
  }
  return output;
}

void BitcoinExchange::dump() {
  for (std::map<std::string, float>::iterator it = this->data.begin();
       it != this->data.end(); ++it) {
    std::cout << "Key: (" << it->first << "), Value: " << it->second
              << std::endl;
  }
}
void BitcoinExchange::dump_input() {
  for (std::map<std::string, float>::iterator it = this->request.begin();
       it != this->request.end(); ++it) {
    std::cout << "Key-: " << it->first << ", Value: " << it->second
              << std::endl;
  }
}
