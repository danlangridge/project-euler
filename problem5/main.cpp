#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

unsigned const MAX = 10000;
// If the number is not dvisible by the largest number, then n + 1, .. n + largest number - 1 wil not be divisible either
int smallestDivisibleNumber_Improved(int bound) {
  int MaxNum = bound;
  int divisibleFlag = 0;
  for (unsigned i = MaxNum; i < MAX; i + bound ) {
    for (unsigned j = bound - 1; j < 1; j--) {
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
  if (MaxNum == MAX) return 0;
  return MaxNum;
}

int smallestDivisibleNumber_Naive(int bound) {
  int MaxNum = bound;
  int divisibleFlag = 0;
  for (unsigned i = MaxNum; i < MAX; i++) {
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
  if (MaxNum == MAX) return 0;
  return MaxNum;
}

int main(int argv, char** argc) {
  cout << smallestDivisibleNumber_Naive(20);
  cout << smallestDivisibleNumber_Improved(20);
  return 0;
}
