#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;


int digitSummation(string str) {
  int sum = 0;
  for (unsigned i = 0; i < str.length(); i++) {
    sum += atoi(str[i]);
  }
  return sum;
}


int main(int argv, char** argc) { 
  double number = pow(2,1000);
  stringstream ss;
  ss << number;
  string str = ss.c_str();
  cout << digitSummation(str); 
  return 0;
}
