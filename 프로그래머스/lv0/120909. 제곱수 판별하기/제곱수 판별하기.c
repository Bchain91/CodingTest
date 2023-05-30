#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 2;
    int i = 0;
    while(i != n){
        if(n == i*i){
            answer = 1;
            break;
        }else{
            i++;
        }
    }    
    return answer;
}