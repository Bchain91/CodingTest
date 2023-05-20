#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 1;
    int temp = 1;
    while(1)
    {            
        i++;
        temp *= i;        
        if(temp > n){
            answer = i-1;
            break;
        }                
    }
    return answer;
}