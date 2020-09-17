#include <iostream>
using namespace::std;

int main(void){
  int k;
  cin >> k;
  int stack[k];
  int top=0;
  int num;
  int answer=0;
  for(int i=0;i<k;i++){
    cin >> num;
    if(num==0){
      top--;
    }
    else{
      stack[top]=num;
      top++;
    }
  }

  for(int i=top-1;i>=0;i--){
    cout << i << stack[i];
    answer += stack[i];
  }

  cout << answer;

  return 0;
}
