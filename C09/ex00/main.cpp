#include "BitcoinExchange.hpp" 

int main(int argc, char *argv[]) {

  if(argc != 2) {
    return 1;
  }
 BitcoinExchange sv_bank("data.csv",argv[1]);
	  sv_bank.read_request();

}
