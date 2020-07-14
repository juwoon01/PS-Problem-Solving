#include <iostream>
using namespace::std;

int main(void){
  int num;
  int count=1;
  int range=1;
  cin >> num;

  for(count=1;range<num;count++){
    range += count*6;
  }

  cout << count;

//  int plus=0;
  /*  while (true) {
      if(num>range){
        plus+=6;
        range+=plus;
        count++;
      }
      else{
        cout<<count;
        break;
      }
    }*/






  return 0;
}
