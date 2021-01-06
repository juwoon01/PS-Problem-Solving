/*https://www.acmicpc.net/problem/14888*/

/*
백트래킹
  스타트 팀: S13 + S31 = 2 + 7 = 9
  링크 팀: S24 + S42 = 6 + 4 = 10
  첫째 줄에 N(4 ≤ N ≤ 20, N은 짝수)이 주어진다.
  둘째 줄부터 N개의 줄에 S가 주어진다.
  각 줄은 N개의 수로 이루어져 있고, i번 줄의 j번째 수는 Sij 이다.
  Sii는 항상 0이고, 나머지 Sij는 1보다 크거나 같고, 100보다 작거나 같은 정수이다.
  첫째 줄에 스타트 팀과 링크 팀의 능력치의 차이의 최솟값을 출력한다.

풀이
  1. 최솟값 출력이기 때문에 모든 값을 구한다.
  2. arr[1][2] + arr[2][1] , arr[3][4] + arr[4][3] -> 차이
  3. 1,2,3 팀 4,5,6팀 -> arr[1][2] + arr[2][1] + arr[1][3] + arr[3][1] + arr[2][3] + arr[3][2]

*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace::std;
int arr[20][20];
bool check[20];
int N;
int MIN = 99999999;

void tree(int count, int index){
  vector<int> start;
  vector<int> link;
  int start_score=0;
  int link_score=0;

  if(count == (N/2)){
    for(int i=0;i<N;i++){
        if(check[i]){
          start.push_back(i);
        }
        else{
          link.push_back(i);
        }
      }
        for(int i = 0; i < (N/2); i++){
          for(int j = 0; j < (N/2); j++)
          {
              start_score += arr[start[i]][start[j]];
              link_score += arr[link[i]][link[j]];
          }
        }
        if(abs(start_score - link_score) < MIN){
            MIN = abs(start_score - link_score);
        }
        return;

  }

  for(int i=index;i<N;i++){

    if(!check[i]){
        check[i] = true;
        tree(count+1,i);
        check[i] = false;
      }
  }

}

int main(void){

  cin >> N;

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cin >> arr[i][j];
    }
  }

  tree(0,0);
  cout << MIN;

  return 0;
}
