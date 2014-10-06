#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;


int[] countDigits(int num) {
  int digits = log10(num);
  int countedDigits[10] = {0}; 
  
  for (unsigned i = 0; i < digits; i++) {
    int countedDigits[(num >> i) & 0x01]++;   
  }
  return countedDigits;
}

bool compareDigits(int num, int highestFactor) {
  int* numDigits = countDigits(num); 
  for (unsigned i = 2; i < highestFactor; i++) {
    int* factorDigits = countDigits(num*i);
    for (unsigned j = 0; j < 10; j++) {
      if (factorDigits[j] != numDigits[j]) return false;
    }
  } 
  return true;
}

int findSameDigitHighestFactor(int start, int highestFactor) {
  for (unsigned i = start; ; i++) {
    if (compareDigits(i, highestFactor) return i; 
  }
}


int main(int argv, char** argc) { 
  cout << findSameDigitHighestFactor(12345678, 6); 
  return 0;
}
