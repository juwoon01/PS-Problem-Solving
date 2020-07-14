#include <iostream>
using namespace::std;

int main(void){
  int num;
  int count=1;
  int range=1;
  int plus=0;
  cin >> num;

    while (true) {
      if(num>range){
        plus+=6;
        range+=plus;
        count++;
      }
      else{
        cout<<count;
        break;
      }
    }




  return 0;
}
