#include "BitcoinExchange.hpp" 
#include <exception>
int main(int argc, char *argv[]) {

  if(argc != 2) {
	   std::cout << "no input file provided" << std::endl;
    return 1;
  }
  try {
	 BitcoinExchange sv_bank("data.csv",argv[1]);

  if(sv_bank.status != 0){
	std::cout << "data base read error" << std::endl;
		return 1;
	}
	
  sv_bank.read_request();
  if(sv_bank.status != 0){
	std::cout << "input file could not be read by the program" << std::endl;
	}
	}
	catch(std::exception){
		std::cout << "dataBase erro while reading" << std::endl;
	}
}
