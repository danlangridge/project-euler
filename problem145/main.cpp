#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

int reverseNumber(double number) {
  stringstream ss;
  ss << number;
  string snumb = number.c_str(); 
  for (unsigned i = 0, j = snumb.length(); i < snumb.length()/2; i++) {
    char temp = snumb[i];
    snumb[i] = snumb[j];
    snumb[j] = temp;
  }
  return atoi(number);
}


void printResult(double[] resultArray) {
  for (unsigned i = 0; i < sizeof(resultArray); i++) {
    cout << resultArray[i];
  }
}

int main(int argv, char** argc) { 
  return 0;
}
