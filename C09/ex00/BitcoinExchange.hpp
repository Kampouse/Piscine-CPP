
#ifndef BITCOINEXCHANGE_HPP
#define  BITCOINEXCHANGE_HPP
#include <algorithm>
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
         int status;

    public:
         std::map<std::string,double>read_data_base(void);
         std::map<std::string, double>read_request(void);
         std::map<std::string,double>data;
         std::map<std::string,double>request;
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
        void printer(std::string &input,double value);
        BitcoinExchange	&operator = (const BitcoinExchange &copy);
         
};
#endif
