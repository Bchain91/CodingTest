#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 1;
    int temp = 6;
    while(temp%n!=0){
        i++;
        temp = 6 * i;        
    }
    answer = i;
    return answer;
}