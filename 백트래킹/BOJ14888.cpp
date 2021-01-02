/*https://www.acmicpc.net/problem/14888*/

/*
백트래킹
  첫째 줄에 수의 개수 N(2 ≤ N ≤ 11)가 주어진다.
  둘째 줄에는 A1, A2, ..., AN이 주어진다.(1 ≤ Ai ≤ 100)
  셋째 줄에는 합이 N-1인 4개의 정수가 주어지는데,
  차례대로 덧셈(+)의 개수, 뺄셈(-)의 개수, 곱셈(×)의 개수, 나눗셈(÷)의 개수이다.
  첫째 줄에 만들 수 있는 식의 결과의 최댓값을, 둘째 줄에는 최솟값을 출력한다.
풀이
  1. 수 고정
  2. 재귀로 모든 가능한 경우 시행
  3. 연산을 스택에 쌓는 형식으로 하고 마지막에 연산
*/

#include <iostream>
using namespace::std;
int num[11];
int calc[4];
int stack[10];

int N;
int MAX = -1000000001, MIN = 1000000001;

void calculator(){
  int result;
  result = num[0];

  for(int i=0;i<N-1;i++){
    if(stack[i]==0){
      result = result + num[i+1];
    }
    else if(stack[i]==1){
      result = result - num[i+1];
    }
    else if(stack[i]==2){
      result = result * num[i+1];
    }
    else if(stack[i]==3){
      result = result / num[i+1];
    }
  }

  if(result > MAX){
    MAX = result;
  }
  if(result < MIN){
    MIN = result;
  }
}

void tree(int count){
  if(count == N-1){
    calculator();
  }
  else{
    for(int i=0;i<4;i++){
      if(calc[i] > 0){
        stack[count] = i;
        calc[i]--;
        count++;
        tree(count);
        calc[i]++;
        count--;
      }
    }
  }

}

int main(void){

  cin >> N;

  for(int i=0;i<N;i++){
    cin >> num[i];
  }
  for(int i=0;i<4;i++){
    cin >> calc[i];
  }

  tree(0);

  cout << MAX << '\n' << MIN;

  return 0;
}
