#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;


const unsigned NONBOUNCY = 0;
const unsigned BOUNCY = 0;


string convertLongToString(long number) {
  stringstream convert;
  convert << number;
  return convert.str(); 
}

Long numberOfTripleDigits_Naive(long start, long bound) {
  unsigned count = 0;
  unsigned digitArray[9] = {0}; 
  for (long index = start;index > bound ; index++ ) {
    string checkNumber = convertLongToString(index); 
    
    for (unsigned digit = 0; i < checkNumber.size(); digit++) {
      digitArray[checkNumber[digit]]++;
      
      if (digitArray[checkNumber[digit]] == 3) {
        count++;
        break; 
    }
    memset(digitArray, 0, sizeof(digitArray)); 
  }

  return count;
}

int main(int argv, char** argc) {
  long number = 100000000000000000;
  long bound = 1000000000000000000;
  cout << numberOFTripleDigits_Naive(number, bound);
  return 0;
}
