#include <iostream>
using namespace::std;
/*
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
    answer += stack[i];
  }

  cout << answer;

  return 0;
}*/
#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, sum = 0;
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        scanf("%d", &arr[i]);
    } //입력 받기
    
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] == 0) {
            for (j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
                arr[i - (1 + j)] = 0; // 이전으로 이동하면서 0이 아닐 경우 루프가 중단, 0으로 값 변경
                if (arr[i - j] != 0) {
                    arr[i - j] = 0;
                    break;
                }
            }
        }
    } //0으로 바꾸기

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
