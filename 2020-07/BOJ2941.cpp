#include <iostream>
#include <string>

using namespace::std;

int main(void){
  string arr[] = {"c=","c-","d-","lj","nj","s=","z="};
  string input;
  cin >> input;
  int answer =0;
  for(int i=0;i<input.length();i++){
      if(input.substr(i,3)=="dz="){
        i=i+2;
      }
      else{
        for(int j=0;j<7;j++){
          if(input.substr(i,2)==arr[j]){
            i++;
            break;
          }
        }
      }
    answer++;
  }

  cout << answer;



  return 0;
}
