#include "iostream"
#include "fstream"





int main(int argc,char *argv[])
{

	std::fstream file;


	
(void)argv;
if(argc != 4)
		std::cout << "<filename> <to-replace> <string>" << std::endl;
if(argc == 4)
	{
		file.open(argv[1],std::ios::in);
		if(!file)
		{
			std::cout << "Error: not such  file found \n";

			return 0;
		}

		std::string line;
		std::getline(file,line); 
		std::cout << line << std::endl;
		 size_t len;
		 size_t word_len;
		word_len = strlen(argv[2]);
		 while (line.find(argv[2]) != std::string::npos)
		{
			len = line.find(argv[2]); 
			  line.erase(len,word_len);	
			  line.insert(len,argv[3],strlen(argv[3]));
		}
				std::cout << line; 

		file.close();
	}

}
