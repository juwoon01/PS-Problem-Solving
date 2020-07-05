#include <iostream>
#include <string>

using namespace::std;
int main(void){

  int n;
  int answer = 0;
  cin >> n;

  for(int i=1; i<=n; i++){
    if(i<100){
      answer++;
    }
    else if((i/100)-(i/10%10)==(i/10%10)-(i%10)){
      answer++;
    }
  }
  cout  << answer;

  return 0;
}
