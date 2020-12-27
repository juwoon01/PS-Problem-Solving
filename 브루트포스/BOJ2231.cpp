/*https://www.acmicpc.net/problem/2231*/

/*
분해합
  n 이 256 일때 245+2+4+5 = 256 245(생성자)를 구하는 알고리즘 (가장 작은)

풀이
  1. 1+1 = 2 부터 올라가며 탐색한다.
*/

#include <iostream>
using namespace::std;



int main(void){
  int n;
  cin >> n;
  int result;
  int flag = 0;

  for(int i=n/2; i<n;i++){
    int num;
    num = i;
    result = 0;
    result += num;
    while(num>0){
      result = result + (num%10);
      num = num / 10;
    }
    if(result == n ){
      cout << i;
      flag = 1;
      break;

    }
  }

  if(!flag){
    cout << 0;
  }

  return 0;
}
