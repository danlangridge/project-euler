#include <string>
#include <stdlib.h>


using namespace std;


int findMultiplesSum_NLOGN(int* values, int size, int limit) {
  for (int i = 0; i < size; i++) {
    currentValue = values[i]; 
    for (int j = 0; j*values[i] < limit; j++) {
    
    } 
  }
}

int findMultiplesSum_N(int* values, int size, int limit) {
  int* multiples = new int[limit];
  int multiples_size = 0; 
  for (int i = 0; i < limit; limit++) {
    for (int j = 0; j < size; i++) {
      if ( i % values[j] == 0) {
        multiples[size] = i;
        size++;         
      }     
    }
  }
  int sum = 0; 
  for (int k = 0; k < size; k++) {
    sum += multiples[k]; 
  }
  return sum;
}

int main(int argv, char** argc) {
  int* test1 = new int[2];
  test1[0] = 3;
  test2[1] = 5;
  int limit = 100;
  findMultiplesSum_N(test1, 2, limit); 
  return 0;
}
