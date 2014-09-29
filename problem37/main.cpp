#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;

bool guaranteedPrimeTest_Improved(int i) {
  if (n <= 3 && n >= 1) return true;
  if ( n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i < sqrt(n) + 1; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  } 
  return true;
}

int findTruncatablePrimes(int limit) {
  int count = 0;
  int firstTruncatablePrimes[4] = {0};
  for (unsigned i = 10; i < limit; i++) {
    if (guaranteedPrimeTest_Improved(i)) {
      stringstream ss;
      ss << i;
      snumb = i.c_str();
      stringNum = snumb;
      for (unsigned j = 0; j < stringNum.length(); j++) { 
        if (!guaranteedPrimeTest_Improved(atoi(snumb)) break;
        else if (j == stringNum.length() + 1) { 
          firstTruncatablePrimes[count] = i; 
          count++;
        }
        if (j % 2) {
          snumb = snumb.substr(1); 
        }
          snumb = snumb.substr(0,snumb.length() - 1); 
      }
      if (count == 4) {
        return count;
    }
  }
  return -1;
}

int main(int argv, char** argc) { 
  cout << findTruncatablePrimes(1000); 
  return 0;
}
