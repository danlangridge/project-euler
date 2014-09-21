#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

inline string convertToString(double number) {
  stringstream ss;
  ss << number;
  return  ss.c_str(); 
}

int reverseNumber(double number) {
  snumb = convertToString(number); 
  for (unsigned i = 0, j = snumb.length(); i < snumb.length()/2; i++) {
    char temp = snumb[i];
    snumb[i] = snumb[j];
    snumb[j] = temp;
  }
  return atoi(number);
}

bool hasOddDigits(int number) {
  snumb = convertToString(number);
  for (unsigned i = 0; i < snumb.length(); i++) {
    if(!(atoi(snumb[i]) % 2)) return false;
  }
  return true;
}

int numberOfReversibleDigits(int limit) {
  int count = 0; 
  for (unsigned i = 0; i < limit; i++) {
    if (hasOddDigits(i) && hasOddDigits(reverseNumber(i)) && hasOddDigits(i + reverseNumber(i)))
      count++;
  }
  return count;
}

void printResult(double[] resultArray) {
  for (unsigned i = 0; i < sizeof(resultArray); i++) {
    cout << resultArray[i];
  }
}

int main(int argv, char** argc) { 
  return 0;
}
