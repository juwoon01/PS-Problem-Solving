#include <iostream>
using namespace::std;

int main(void){
  int n;
  cin >> n;
  int count=0;

  for(int i=666;;i++){

    int num=i;
    while(num>100){
      if(num%1000 == 666){
        count++;
        break;
      }
      else{
        num/=10;
      }
    }
    if(count==n){
      cout << i;
      break;
    }
  }

  return 0;
}
