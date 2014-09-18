#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;


int[] returnDigits(int number) {
  stringstream ss;
  ss << number;
  string snumber = ss.c_str();
  int* digits = new int[snumber.length()];
  for (unsigned i = 0; i < snumber.length(); i++) {
    digits[i] = snumber[i];
  }
  return digits;
}


int sumOfFithPowers(int start, int end, int power) {
  int count = 0;
  for (unsigned i = start; i < end; i++) {
    int digits[] = returnDigits(i);
    int sum = 0;
    for (unisigned j = 0; j < sizeof(digits); j++) {
      sum += digits[j]^power; 
    }
    if (sum == i) count++; 
  }
  return count;
}

int main(int argv, char** argc) { 
  cout << sumOfFifthPowers(1,10000,5); 
  return 0;
}
