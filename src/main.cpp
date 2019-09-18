#include <iostream>
#include <string>
#include <unistd.h>
#include "mcli.h"


std::string getCurrentPath(); 
int main(int argc, char** argv)
{
//  std::cout << getCurrentPath() << std::endl;
    std::cout << "111111" << std::endl;
    std::cout << "222222" << std::endl;
    std::cout << "333333" << std::endl;
    std::cout << "444444" << std::endl;
    std::cout << "555555" << std::endl;
    std::cout << "666666" << std::endl;
    std::cout << "777777" << std::endl;
    mcli::rmLine(3);
    std::cout << "888888" << std::endl;
    std::cout << "999999" << std::endl;


    

    
    
}


std::string getCurrentPath()
{
  size_t size = sizeof(char) * 256;
  char *path=nullptr;
  path=getcwd(path,size);
  return path;
}

