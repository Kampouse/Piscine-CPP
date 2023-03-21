
#ifndef BITCOINEXCHANGE_HPP
#define  BITCOINEXCHANGE_HPP
#include <algorithm>
#include <atomic>
#include <iostream>
#include <fstream>
#include <utility>
#include <map>
#include <sstream>
class BitcoinExchange
{

	class DataBaseReadError: public std::exception 
	{
				public :
					virtual const char* what() const throw();
	};
    private:
        std::string  database_filname;
        std::string  request_filename;

    public:
        int status;
        int max_date;
        int min_date;
         std::map<std::string,float>read_data_base(void);
         std::map<std::string, float>read_request(void);
         std::map<std::string,float>data;
         std::map<std::string,float>request;
        BitcoinExchange(void);
        BitcoinExchange(std::string name,std::string name_request);
        ~BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange &copy);
        void setBitcoin(int bitcoin);
        void setDollar(int dollar);
        int getBitcoin(void)const;
        int getDollar(void)const;
        void dump(void);
        void dump_input(void);
        void printer(std::string &input,float value);
        std::pair< std::string,float>  find_closest (std::pair <std::string,float> input);
        BitcoinExchange	&operator = (const BitcoinExchange &copy);
         
};
#endif
