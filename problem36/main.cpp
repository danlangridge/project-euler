#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

bool isPaindrome(string number) {
  int digit = log10(atoi(number));
  bool isEven = (digit % 2 : false ? true);
  for (unsigned i = 0, j = digit - 1 ; i < digit/2; i++, j--) {
    if (i == j || (isEven && i+1 == j - 1 )) return true;
    if (number[i] != number[j]) return false; 
  }
  return true;
}

string convertToBinary(int number) {
  stringstream ss;
  for (unsigned i = 0; i < sizeof(number)*8; i++) {
    ss << ((number &(1 << i)) ? 1 : 0);
  }
  return ss.c_str();
}

int palinromeCount(int limit) {
  int count = 0;
  for (unsigned i = 0; i < limit; i++) {
    stringstream ss;
    ss << i;
    string binaryNumber = convertToBinary(i);
    string decimalNumber = ss.c_str();
    if (isPalindrome(decimalNumber) && isPalindrome(binaryNumber)) count++;
  }
  return count;
}

int main(int argv, char** argc) { 
  cout << palindromeCount(10000); 
  return 0;
}
