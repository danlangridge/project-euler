#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int totalPower(int n) {
  int count = 0; 
  for (unsigned i = 0; i < 1*10^n; i++) {
    if ((i^n & 1*10^n)) count++;   
  }
  return count;
}

int main(int argv, char** argc) { 
  cout << totalPower(5); 
  return 0;
}
