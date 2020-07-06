#include <iostream>
#include <string>

using namespace::std;

int main(void){
  string input;
  int count[26]={0,};
  cin >> input;

  for(int i=0; i< input.length(); i++){
    for(int j=0;j<26;j++){
      if(input.at(i)=='a'+j||input.at(i)=='A'+j) {
        count[j]++;
        break;
      }
    }
  }
  int first=0;
  int second=0;
  for(int j=1;j<26;j++){
      if(count[j] < count[first]){
        second=j;
        break;
      }

    }

  for(int j=1;j<26;j++){
      if(count[first] < count[j]){
        first=j;
      }
      else if(count[second]<=count[j]){
        second=j;
      }

    }

    if(count[first]==count[second]){
      cout << '?';
    }
    else{
      cout << (char)('A'+first);
    }

  return 0;
}
