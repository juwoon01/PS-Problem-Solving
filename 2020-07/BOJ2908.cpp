#include <iostream>
#include <string>

using namespace::std;

int main(void){
  string num1;
  string num2;

  cin >> num1 >> num2;

  string renum1;
  string renum2;

  for(int i=num1.length()-1;i>=0;i--){
    renum1+=num1.at(i);
  }
  for(int i=num2.length()-1;i>=0;i--){
    renum2+=num2.at(i);
  }

  if(stoi(renum1)>stoi(renum2)){
    cout << renum1;
  }
  else{
    cout << renum2;
  }
  return 0;
}
