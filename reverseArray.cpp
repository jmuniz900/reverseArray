#include <iostream>

using namespace std;

void reverseArray(int (&arrayG)[]){
int count = 3;

  while(count > 0){
    cout << arrayG[count];
    count--;
  }
}

int main(){
  int size = 4;
  int arrayT[size] = {1, 2, 3, 4};

reverseArray(arrayT);

 return 0;
}
//changes
