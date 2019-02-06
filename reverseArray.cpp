#include <iostream>

using namespace std;

int SIZE = 4; //global size

int reverseArray(int &array){
  int count = SIZE;
  int arrayR[SIZE];

  while(count > 0){
    for(int i = 0; i < SIZE; i++){
      arrayR[i] = array[count];
    }
    count--;
  }
  return arrayR;
}

int main(){
  int array[SIZE] = {1, 2, 3, 4};

  reverseArray(array);
}
