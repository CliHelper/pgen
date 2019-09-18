#include "mcli.h"
#include <stdio.h>


void mcli::rmLine(int n){
  printf("\033[%dA\033[J", n);
}




