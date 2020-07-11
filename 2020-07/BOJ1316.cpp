#include <iostream>
#include <string>

using namespace::std;

int main(void){
  int num;
  string input;

  cin >> num ;
  int answer =0;
  bool count;
  for(int i=0;i<num;i++){
    cin >> input;
    count = true;
    for(int j=0;j<input.length();j++){
      for(int k=0;k<j;k++){
        if(input.at(j)!=input.at(j-1) && input.at(j)==input.at(k)){
          count = false;
          break;
        }
      }
      if(!count){
        break;
      }
    }
    if(count){
      answer++;
    }
  }

  cout << answer;
  return 0;
}
