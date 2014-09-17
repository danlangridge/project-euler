#include <string>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <iostream>
#include <sstream>
#include <time.h>

using namespace std;


int sumOfFithPowers() {
  int count = 0;
  for (unsigned number = 1000; number < 10^5; number++) {
    int one = (number & 0x01);
    int two = (number & 0x02);
    int three = (number & 0x04);
    int four = (number & 0x08);
    if (number == one^5 + two^5 + three^5 + four^5) count++;
  }
  return count;
}

int main(int argv, char** argc) { 
  cout << sumOfFifthPowers(); 
  return 0;
}
