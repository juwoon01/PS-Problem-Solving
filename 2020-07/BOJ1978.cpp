#include <iostream>

using namespace::std;

int main(void){
  int n;

  cin >> n;
  int num;
  int count;
  int answer=0;
  for(int i=0; i<n; i++){
    cin >> num;
    count = 0;
    for(int j=2; j<=num; j++){
      if(num%j == 0){
        count++;
      }
    }
    if(count == 1){
      answer++;
    }
  }
  cout << answer;


  return 0;
}
