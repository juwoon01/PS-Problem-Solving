#include <iostream>
#include <vector>

using namespace::std;
int n;
int column[15];//열 column[0] = 2 == 1행 2열
int answer=0;

bool impossible(int count){
  for(int j=0;j<count;j++)
     {
         if(column[j] == column[count]/*같은 행인지*/ ||
            abs(column[count]-column[j]) == (count-j)/*대각선인지*/)
             return false;
     }
     return true;
}

void dfs(int count){
  if(count == n)
       answer += 1;
   else
   {
       for(int row=0;row<n;j++)
       {
           column[count] = row;
           if(impossible(count))
               dfs(count+1);
       }
   }
}

int main(void){
  cin >> n;

  dfs(0);

  cout << answer;
  return 0;
}
