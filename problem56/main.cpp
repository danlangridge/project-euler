#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>

using namespace std;


int sumOfDigits(int num) {
  stringstream ss;
  ss << num;
  string snum = ss.c_str();
  int digitSum = 0;
  for (unsigned i = 0; i < snum.length(); i++) {
    digitSum = atoi(snum[i]);  
  }
  return digitSum;
}


int findMaximumDigitalSum(int limit) {
  int maximum = 0;
  for (unsigned a = 1; a < limit; a++) {

    for (unsigned b = 1; b < limit; b++) {
      if (maximum < sumOfDigits(a^b)) maximum = sumOfDigits(a^b);
    } 
  }
  return maximum;
}


int main(int argv, char** argc) {
  cout << findMaximumDigitalSum(100); 
  return 0;
}
