#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

int largestDivisibleNumber_Naive(int bound) {
  int MaxNum = bound;
  int divisibleFlag = 0;
  for (unsigned i = MaxNum; i < 100000; i++) {
    for (unsigned j = 1; j < bound; j++) {
      if ( MaxNum % j > 0) {
        divisibleFlag = 1;
        break;
      }
    }
    if ( divisibleFlag == 0) {
      MaxNum = i;
    }
    divisibleFlag = 0;
  }
  if (MaxNum == 100000) return 0;
  return MaxNum;
}

int main(int argv, char** argc) {
  cout << largestDivisibleNumber_Naive(20);
  return 0;
}
