#include <iostream>

using namespace std;

void reverseArray(int (&thearray)[4], int &thesize){
  int count = thesize - 1;
  cout << "After: ";
for(int i = 0; i < thesize; i++){
  cout << thearray[count] << " ";
  count--;
}
  cout << endl;
}

int main(){
  int sizeOfArray = 4;
  int myarray[4] = {1, 2, 3, 4};

  cout << "Before: ";
  for(int i = 0; i < sizeOfArray; i++){
    cout << myarray[i] << " ";
  }
  cout << endl;

  reverseArray(myarray, sizeOfArray);

  return 0;
}
