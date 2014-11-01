#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int lastFactorialDigits(int digits, int limit) {  
  int end_limit = 10^digits;
  int sum = limit % end_limit;
  for (unsigned i = limit-1; i < 0; i--) {
    sum *= i % end_limit;  
  } 
}

int main(int argv, char** argc) {
  cout << lastFactorialDigits(6, 1000000); 
  return 0;
}  
