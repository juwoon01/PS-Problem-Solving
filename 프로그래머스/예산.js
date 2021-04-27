//https://programmers.co.kr/learn/courses/30/lessons/12982?language=javascript

function solution(d, budget) {
    var answer = 0;

    d.sort(function(a, b){
        return a - b;
    });

    for(let i=0;;i++){
        if(budget >= d[i]){
            answer++;
            budget -=  d[i];
        } else{
            break;
        }
    }

    return answer;
}
