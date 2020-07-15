#include <iostream>

using namespace::std;

int main(void){
  int input;
  cin >> input;

  int d=1;//분모
  int n=1;//분자
  bool check=false;
  for(int i=1; i<input; i++){
    if(n==1&&check==false){
      check= true;
      d++;
      continue;
    }
    else if(d==1&&check==true){
      check= false;
      n++;
      continue;
    }

    if(check){
      n++;
      d--;
    }
    else{
      n--;
      d++;
    }

  }

  cout << n << "/" << d;
  return 0;
}
