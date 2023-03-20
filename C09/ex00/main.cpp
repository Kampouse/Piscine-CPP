#include "BitcoinExchange.hpp" 



int main(int argc, char *argv[]) {

  if(argc != 2) {
    return 1;
  }
  std::cout << argv[1] << std::endl;
 BitcoinExchange sv_bank("data.csv",argv[1]);

  sv_bank.read_request();

}
