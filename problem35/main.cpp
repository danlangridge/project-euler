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

int CiclicalPrimes(int limit) {
  int count = 0;
  for (unsigned i = 0; i < limit; i++) {
    stringsteam ss;
    ss << i;
    string snumb = ss.c_str();
    for (unsigned j = 0; j < snumb.length(); j++) {
      if (guaranteedPrimeTest_Improved(atoi(snumb))) count++;      
    }
    snumb = snumb.substr(1, snumb.length()) + snumb[0];
  }
  return count;
}

int main(int argv, char** argc) { 
  cout << ciclicalPrimes(1000);
  return 0;
}
