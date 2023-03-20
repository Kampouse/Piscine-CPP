#include "BitcoinExchange.hpp"
const char *BitcoinExchange::DataBaseReadError::what() const throw() {
  return ("could not be accessed");
}
BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(std::string filename,
                                 std::string file_request) {
  this->database_filname = filename;
  this->request_filename = file_request;
  this->data = read_data_base();

  if (this->status != 0) {
    throw BitcoinExchange::DataBaseReadError(); 
  }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) { *this = copy; }
BitcoinExchange::~BitcoinExchange(void) {}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
  this->database_filname = copy.database_filname;
  this->data = copy.data;
  return (*this);
}
std::map<std::string, double> BitcoinExchange::read_data_base(void) {
  std::map<std::string, double> output;
  this->status = 0;
  std::ifstream infile(this->database_filname.c_str());

  std::string line;
  if (!infile) {
    this->status = 1;
    // or throw an error here
    return output;
  }
  while (std::getline(infile, line)) {

    std::stringstream ss(line);
    std::string date, btc_value;
    std::getline(ss, date, ',');
    std::getline(ss, btc_value, ',');
    double value = atof(btc_value.c_str());
    output[date] = value;
  }

  return output;
}

static std::string &rtrim(std::string &s) {
  s.erase(std::find_if(s.rbegin(), s.rend(),
                       std::not1(std::ptr_fun<int, int>(std::isspace)))
              .base(),
          s.end());
  return s;
}
void BitcoinExchange::printer(std::string &input, double value) {
  if (input != "date") {

    if (this->data[input] == 0) {
      std::cout << "invalid date or value is none" << std::endl;
    }
    else if (value <= 0 || value > 1000) {

       if(value <= 0) {
         
      std::cout << "too low of value or input is invalid " <<  value << std::endl;
      } else {

        std::cout << "too high of value: " <<  value << std::endl;
      }
    }
    else {
      std::cout << input << "=> " << value << " = " << this->data[input] * value << std::endl;
    }

  }
}
std::map<std::string, double> BitcoinExchange::read_request(void) {
  std::map<std::string, double> output;
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
    double value = atof(btc_value.c_str());
    date = rtrim(date);
    printer(date, value);
  }
  return output;
}

void BitcoinExchange::dump() {
  for (std::map<std::string, double>::iterator it = this->data.begin();
       it != this->data.end(); ++it) {
    std::cout << "Key: (" << it->first << "), Value: " << it->second
              << std::endl;
  }
}
void BitcoinExchange::dump_input() {
  for (std::map<std::string, double>::iterator it = this->request.begin();
       it != this->request.end(); ++it) {
    std::cout << "Key-: " << it->first << ", Value: " << it->second
              << std::endl;
  }
}
