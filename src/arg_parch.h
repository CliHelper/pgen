
#pragma once
#include <vector>
#include <string>


class ArgParse{
	private:
   		std::vector<std::string> args;
	public:
	  ArgParse(int,char**);
	  bool contein(std::string);
};








