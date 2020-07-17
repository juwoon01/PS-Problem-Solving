#include <iostream>

using namespace::std;

int main(void){
  int a;
  int b;
  int v;
  cin >> a >> b >> v;

  /*if((v-a)%(a-b)==0){
    cout << (v-a)/(a-b) + 1;
  }
  else{
    cout << (v-a)/(a-b) + 2;
  }*/
  cout << (v-b-1)/(a-b) + 1;

  return 0;
}
