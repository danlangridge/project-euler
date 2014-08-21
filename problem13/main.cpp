#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>

using namespace std;

long findSum(long* truncatedNumbers, unsigned size) {
  long sum = 0; 
  for (unsigned i = 0; i < size; i++) {
    sum += truncatedNumbers[i];
  }
  return sum;
}

long* truncatedNumbers(fstream &file, unsigned& size, unsigned limit) {
  string line = "", truncatedLine = "";
  long* truncatedNum = new long[120]; 
  while(file.eof()) {
    getline(file, line);
    truncatedLine = line.substr(strlen(line) - limit); 
    truncatedNum[size++] = atoi(truncatedLine.c_str()); 
  }
  return truncatedNum;
}

int main(int argv, char** argc) {
  if (argv == 0) return 0;
  fstream file;
  file.open(argc[0]);
  unsigned size = 0;
  unsigned limit = 10;
  long* truncatedNumbers = truncatedSum(file, size, limit);
  cout << findSum(truncatedNumbers, size);
  file.close();
  return 0;
}
