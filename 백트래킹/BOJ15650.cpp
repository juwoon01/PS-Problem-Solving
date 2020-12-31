/*https://www.acmicpc.net/problem/15649*/

/*
백트래킹
  첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
  한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.
  중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
  1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
  고른 수열은 오름차순이어야 한다.

풀이
  1. 4 2 시 12 13 14 23 24 34
  2. 중복을 허용하는 수열 작성
  3. 루프 노드와 단말 노드로 나누어 중복 제거
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

void leaf(int index, int num){
  if(index == M ){
    print();
    return;
  }
  for(int i=num; i<=N; i++){
    if(!check[i]){//넣으려는 숫자가 false면(없으면)
      stack[index] = i;
      check[i] = true;
      leaf(index+1, i+1);
      check[i] = false;
    }

  }
}

void roof(int index){
  for(int i=1; i<=N; i++){
      stack[index] = i;
      check[i] = true;
      leaf(index+1,i+1);
  }
}

int main(void){

  cin >> N >> M;
  roof(0);

  return 0;
}
