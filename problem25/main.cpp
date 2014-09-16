#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int fibonacciLargestDigit(int limit) {
  int f1 = 0;
  int f2 = 1;
  int temp = 0;
  for (unsigned i = 0; i < limit;) {
    temp = f2;
    f2 = f1 + f2;
    f1 = temp; 
    i = temp; 
  }

  return f2;
}


int main(int argv, char** argc) { 
  fibonacciLargestDigit(10^100);  
  return 0;
}
