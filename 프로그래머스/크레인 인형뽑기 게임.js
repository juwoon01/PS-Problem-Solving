 /*[[0,0,0,0,0],
     [0,0,1,0,3],
     [0,2,5,0,1],
     [4,2,4,4,2],
     [3,5,1,3,1]]*/
//배열, stack 문제 level 1 
function solution(board, moves) {
    let answer = 0;// 터트린 인형의 개수
    let stack = [];
 
    for(let i=0; i<moves.length; i++){//moves의 길이만큼
        let move = moves[i]-1;
        
        for(let level = 0; level < board.length; level++){//깊이
            if(board[level][move] != 0){//빈칸이 아니면
                if(board[level][move] == stack[stack.length - 1]){//비교
                    stack.pop();
                    answer += 2;
                } else{
                    stack.push(board[level][move]);
                }
                board[level][move] = 0;
                break;
            } 
        }
    }
    return answer;
}