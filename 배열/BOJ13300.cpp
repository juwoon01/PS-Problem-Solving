/*
입력
표준 입력으로 다음 정보가 주어진다.
첫 번째 줄에는 수학여행에 참가하는 학생 수를 나타내는 정수 N(1 ≤ N ≤ 1,000)과
한 방에 배정할 수 있는 최대 인원 수 K(1 < K ≤ 1,000)가 공백으로 분리되어 주어진다.
다음 N 개의 각 줄에는 학생의 성별 S와 학년 Y(1 ≤ Y ≤ 6)가 공백으로 분리되어 주어진다.
성별 S는 0, 1중 하나로서 여학생인 경우에 0, 남학생인 경우에 1로 나타낸다.

출력
표준 출력으로 학생들을 모두 배정하기 위해 필요한 최소한의 방의 수를 출력한다.
*/

#include <iostream>
using namespace::std;
int main(void){
  int N, K;
  int S, Y;
  int student[2][6] = {0};
  int result = 0;
  cin >> N >> K;

  for(int i=0; i<N; i++){
    cin >> S >> Y;
    student[S][Y-1]++;
  }

  for(int i=0; i<6; i++){
    result += ((student[0][i] % K) == 0) ? (student[0][i] / K) : (student[0][i] / K) + 1;
    result += ((student[1][i] % K) == 0) ? (student[1][i] / K) : (student[1][i] / K) + 1;
  }

  cout << result;

  return 0;
}
