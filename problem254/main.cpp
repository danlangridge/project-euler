#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int factorialSum(int number) {
  int sum = 0;
  for (unsigned i = 1; i <= number; i++) {
    sum += i;
  }
  return sum;
}

int addDigits(int number) {
  int sum = 0; 
  stringstream ss;
  ss << number;
  string numberString = ss.c_str();
  for (unsigned i = 0; i < numberString.size(); i++) {
    sum += atoi(numberString[i]); 
  }
  return sum; 
}


int addAndFactorializeDigits(int number) {
  int sum = 0; 
  stringstream ss;
  ss << number;
  string numberString = ss.c_str();
  for (unsigned i = 0; i < numberString.size(); i++) {
    sum += factorialSum(atoi(numberString[i])); 
  }
  return sum; 
}

int findSmallestNumberSum(int number) {
}

int main(int argv, char** argc) { 
  cout << addAndFactorializeDigits(342);
  return 0;
}
