#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    int cnt = 0;
    char* str[7];    
    for(i; i <= j; i++)
        sprintf(str[cnt++],"%d", i);
    //printf("%s ", str[0]);
    return answer;
}