#include <iostream>
#include <string>
#include <unistd.h>
#include "mcli.h"
#include "arg_parch.h"

std::string getCurrentPath(); 
int main(int argc, char** argv)
{
	ArgParse cmds(argc, argv);

	
 	std::cout << getCurrentPath() << std::endl;
}


std::string getCurrentPath()
{
	size_t size = sizeof(char) * 256;
	char *path=nullptr;
	path=getcwd(path,size);
	return path;
}

