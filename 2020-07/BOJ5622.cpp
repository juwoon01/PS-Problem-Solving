#include <iostream>
#include <string>

using namespace::std;

int main(void){
  string input;
  cin >> input;
  int answer = 0;
  for(int i=0; i<input.length();i++){
    if(input.at(i)=='1'){
      answer+=2;
    }
    else if(input.at(i)>='A'&&input.at(i)<='C'){
      answer+=3;
    }
    else if(input.at(i)>='D'&&input.at(i)<='F'){
      answer+=4;
    }
    else if(input.at(i)>='G'&&input.at(i)<='I'){
      answer+=5;
    }
    else if(input.at(i)>='J'&&input.at(i)<='L'){
      answer+=6;
    }
    else if(input.at(i)>='M'&&input.at(i)<='O'){
      answer+=7;
    }
    else if(input.at(i)>='P'&&input.at(i)<='S'){
      answer+=8;
    }
    else if(input.at(i)>='T'&&input.at(i)<='V'){
      answer+=9;
    }
    else if(input.at(i)>='W'&&input.at(i)<='Z'){
      answer+=10;
    }
    else if(input.at(i)=='0'){
      answer+=11;
    }
    /*
    answer += arr[input.at(i)-'A'];
    */
  }



  cout << answer;
  return 0;
}
