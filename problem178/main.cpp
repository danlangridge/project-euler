#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

struct bigNum {
  char digit[100];

 
  digitAdd(bigNum one, bigNum& two, unsigned digit) {
   char addition = one[digit] + two[digit];
   if (addition > 9) {
     addition = addition - 9;    
   }
  }
  
  //TODO: Implement operators
  bigNum operator+(const bigNum& otherNum) {
    bigNum createdNum;
    for (unsigned i = 0; i < 100; i++) {
      createdNum[i] = digitAdd(digit[i],otherNum.digit[i]);
    
    }
    return createdNum;
  }  
  bigNum operator++() {
    bigNum
  }
};

long numberOfStepNumbers(bigNum bound) {
  long count = 0;
  char currentDigit = bound[0];
  for (bigNum i = 0; i < bound; i++) {
    for (unsigned k = 0; k < 100; k++) {
      if (currentDigit == bound[i] + 1 || currentDigit == bound[i] - 1);
      else if (currentDigit == 10) {
        count++;
      }
    }
  }
  return count;
}

int main(int argv, char** argc) {
  bignNum bound = bigNum("100000000000000000000000000000000000000000000000000000000000");
  cout << numberOfStepNumbers(bound); 
  return 0;
}
