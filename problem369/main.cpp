#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

const int DECK = 52;
const int SUIT = 16;

int numberOfCombinations(int n) {
  int combinations = 0;
  combinations = (n!/4)/52!;
  return combinations;
}

int numberOfBadugiCombinationsSum(int lowerBound, int upperBound) {
  int sum = 0;
  for (unsigned i = lowerBound; i < upperBound; i++) {
    sum += numberOfCombinations(int n);
  } 
  return sum;
}

int main(int argv, char** argc) { 
  return 0;
}
