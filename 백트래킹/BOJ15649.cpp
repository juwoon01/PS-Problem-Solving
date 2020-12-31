/*https://www.acmicpc.net/problem/15649*/

/*
백트래킹
  첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
  한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
  중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
  수열은 사전 순으로 증가하는 순서로 출력해야 한다.

풀이
  1. 4 2 시 12 13 14 21 23 24  3 3 시 123 132 213 231 312 321
  2. 중복을 허용하는 수열 작성
  3. 중복 제거 (check 배열 사용)
*/


#include <iostream>
using namespace::std;
int stack[8];
bool check[9];
int N, M;

void print(){
  for(int i=0;i<M;i++){
    cout << stack[i] << " ";
  }
  cout << '\n';
}

void tree(int index){
  if(index == M ){
    print();
    return;
  }
  for(int i=1; i<=N; i++){
    if(!check[i]){//넣으려는 숫자가 false면(없으면)
      stack[index] = i;
      check[i] = true;
      tree(index+1);
      check[i] = false;
    }

    }
}

int main(void){

  cin >> N >> M;
  tree(0);

  return 0;
}
