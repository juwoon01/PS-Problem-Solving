/*
어떤 큰 도화지에 그림이 그려져 있을 때, 그 그림의 개수와, 그 그림 중 넓이가 가장 넓은 것의 넓이를 출력하여라. 
단, 그림이라는 것은 1로 연결된 것을 한 그림이라고 정의하자.
가로나 세로로 연결된 것은 연결이 된 것이고 대각선으로 연결이 된 것은 떨어진 그림이다.
그림의 넓이란 그림에 포함된 1의 개수이다.

입력
첫째 줄에 도화지의 세로 크기 n(1 ≤ n ≤ 500)과 가로 크기 m(1 ≤ m ≤ 500)이 차례로 주어진다. 
두 번째 줄부터 n+1 줄 까지 그림의 정보가 주어진다. 
(단 그림의 정보는 0과 1이 공백을 두고 주어지며, 0은 색칠이 안된 부분, 1은 색칠이 된 부분을 의미한다)

출력
첫째 줄에는 그림의 개수, 둘째 줄에는 그 중 가장 넓은 그림의 넓이를 출력하여라. 
단, 그림이 하나도 없는 경우에는 가장 넓은 그림의 넓이는 0이다.

*/

#include <bits/stdc++.h>
using namespace::std;
int board[500][500];
bool visite[500][500];
queue<pair<int, int>> Q;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    int result_area = 0;
    int result_count = 0;

    int dx[4] = {0, 0, -1, 1}; //좌우
    int dy[4] = {-1, 1, 0, 0}; //상하
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> board[i][j];
        }
    }

    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            if(board[row][col] == 0 || visite[row][col]){//선이 없거나 이미 방문 했으면
                continue;
            }
            int area = 0;
            visite[row][col] = true;
            Q.push({row, col});

            while(!Q.empty()){//Q에 들어간 칸의 상하좌우 확인  1 0, -1 0, 0 -1, 0 1
                pair<int, int> current = Q.front(); 
                Q.pop();
                area++;
                for(int dir = 0; dir < 4; dir++ ){
                    int nx = current.first + dx[dir];
                    int ny = current.second + dy[dir];
                    if(nx >= n || ny >= m || nx < 0 || ny < 0){//범위 밖이면
                        continue;
                    } 

                    if( board[nx][ny] == 0 || visite[nx][ny]){
                        continue;
                    } 
                    
                    //상하좌우에 그림이 있고 방문한 적 없으면 
                    visite[nx][ny] = true;
                    Q.push({nx, ny});
                }
            }
            
            result_area = max(area, result_area);
            result_count++;
            


        }
    }

    cout << result_count << '\n' << result_area;

}