#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

const int INVALID = -1;
const int VALID = 1;

void setPalindromeArray(int[] &numCheck, int iterations, int validity) {
  while (iterations > 2) {
    numCheck[iterations] = validity; 
    iterations /= 2;
  }
}

bool isLychrelNumber(int limit, int numIterations, int[] &numCheck, int num) {
  int iteration = num; 
  for (unsigned i = 0; i < numIterations; i++) {
    if (numCheck[iteration] == 1) {
      numcheck[num] = VALID;
      return true;
    } 
    if (isPalindrome(iteration)) {
       setPalindromeArray(numCheck, iteration, INVALID);
       return false;
    }
    iteration += iteration; 
  } 
  setPalindromeArray(numCheck, iteration, VALID);
}

int[] lychrelNumbersBelowNum(int limit, int numIterations) {
  int numCheck[num] = {0}
  int totalLychrelNumbers = 0; 
  for (unsigned i = 0; i < limit; i++) {
    isLychelNumber(limit, numIterations, numCheck, i); 
  }
  for (unsigned i = 0; i < limit; i++) {
    if (numCheck[i]) totalLychrelNumbers++; 
  }
  return totalLychrelNumbers; 
}


int main(int argv, char** argc) { 
  cout << lychrelNumbersBelowNum(10000, 50); 
  return 0;
}
