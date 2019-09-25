
#include <vector>
#include "arg_parch.h"

ArgParse::ArgParse(int argc,char** argv){
    this->args.reserve(argc);
	for(int i = 0;i < argc;i++){
		this->args.emplace_back(argv[i]);
	};
};

bool ArgParse::contein(std::string arg){
	std::string strArg = arg;
	for(unsigned long i = 0;i< this->args.size();i++){
		if(strArg == this->args[i])
			return true;
	};

	return false;
};


















