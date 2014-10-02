#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

string nextPermutation() {
  return "123456789";
}

bool isDiv(char a, char b, char c, int divisor) {
  string number = a+b+c;
  if (atoi(number) % divisor) return true;
  return false;
}

bool pandigitQualifier(string pandigit) {
  int divisors[7] = {2,3,5,7,11,13,17};
  for (unsigned i = 0; i < 7; i++) {
    if (!isDiv(pandigit[i+1],pandigit[i+2],pandigit[i+3],divisors[i])) return false;
  }
  return true;
}

int sumPandigitPermutations() {
  int sum = 0; 
  for (unsigned i = 0; i < 9!; i++) {
    string pandigit = nextPermutation();
    if (pandigitQualifier(pandigit)) {
      sum += atoi(pandigit);
    }
  }
  return sum;
}

int main(int argv, char** argc) { 
  cout << sumPandigitPermutations(); 
  return 0;
}
