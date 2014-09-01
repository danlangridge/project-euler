#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

struct bigNum {
  char digit[100];

  //TODO: Implement operators
}

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
