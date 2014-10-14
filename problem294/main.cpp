#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

bool equalsD(int num, int compare) {
  int digits = log10(num);
  int sum = 0; 
  for (unsigned i = 0; i < digits; i++) {
    sum += ((num >> i) & 0x01);  
  }
  if (sum == compare) return true;
  return false;
}

int functionS(int limit, int compare) {
  int count = 0;
  for (unsigned i = 0; i < limit; i++) {
    if (i%compare == 0 && equalsD(i,compare) count++; 
  } 
  return count;
}


int main(int argv, char** argc) { 
  cout << functionS(11^12, 23) % 10^9; 
  return 0;
}
