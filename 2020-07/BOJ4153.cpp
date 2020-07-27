#include <iostream>

using namespace::std;

int main(void){
  int num[3];
  while(true){
    cin >> num[0] >> num[1] >> num[2];
    if(!(num[0]||num[1]||num[2])){
      break;
    }

    cout << ((num[0]*num[0]==num[1]*num[1]+num[2]*num[2]||
      num[1]*num[1]==num[1]*num[0]+num[0]*num[2]||
    num[2]*num[2]==num[0]*num[0]+num[1]*num[1])?"right":"wrong")<< endl;

  }
  /*while(true){
    cin >> num[0] >> num[1] >> num[2];
    if(!(num[0]+num[1]+num[2])){
      break;
    }

    int heru,ausar,auset;
    heru=num[0];

      if(heru<num[1]){
        ausar=heru;
        heru=num[1];
      }else{
        ausar=num[1];
      }
      if(heru<num[2]){
        auset=heru;
        heru=num[2];
      }else{
        auset=num[2];
      }

    if(heru*heru==(ausar*ausar)+(auset*auset)){
      cout <<"right"<<endl;
    }
    else{
      cout <<"wrong"<<endl;
    }


  }*/
  return 0;
}
