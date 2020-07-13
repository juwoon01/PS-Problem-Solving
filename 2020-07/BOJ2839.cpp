#include <iostream>

using namespace::std;

int main(void){
  int num;
  cin >> num;

  int count =0;
  while(num > 0){

    if(num == 1 || num == 2){
      cout << -1;
      return 0;
    }

    if(num%5 == 0){
      cout << (num/5) + count;
      return 0;
    }
    else{
      num-=3;
      count++;
    }

  }

  cout << count;
  return 0;
}
