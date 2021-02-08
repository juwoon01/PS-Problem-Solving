/*
문제
요세푸스 문제는 다음과 같다.

1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다.
이제 순서대로 K번째 사람을 제거한다.
한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다.
이 과정은 N명의 사람이 모두 제거될 때까지 계속된다.
원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다.
예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.
N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N과 K가 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ K ≤ N ≤ 5,000)

출력
예제와 같이 요세푸스 순열을 출력한다.
*/

struct Node{
  int num;
  struct Node* next;
  struct Node* pre;
};

#include <iostream>
using namespace::std;
int main(void){
  int N, K;
  struct Node list[5000];
  struct Node* point;

  cin >> N >> K;

  list[0].next = &list[1];
  list[1].num = 1;
  for(int i=2;i<=N;i++){
    list[i].num = i;
    list[i-1].next = &list[i];
    list[i].pre = &list[i-1];
  }
  list[N].next = &list[1];
  list[1].pre = &list[N];

  point = &list[0];

  cout << '<';
  for(int i = 0; i < N; i++){
    for(int j = 0; j < K; j++){
      point = point->next;
    }
    cout << point->num;
    point->pre->next = point->next;
    point->next->pre = point->pre;
    if(i < N-1)
      cout << ", ";
  }
  cout << '>';

  return 0;
}
