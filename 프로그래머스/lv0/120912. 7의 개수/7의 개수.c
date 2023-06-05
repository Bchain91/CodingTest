#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    char buf[100000];
    int answer = 0;
    int i, j, size;
    
    for(i=0; i<array_len; i++){
        size = sprintf(buf, "%d", array[i]);    
        for(j = 0; j<size; j++)
        {
            if(buf[j] == '7')
                answer++;
        }
    }
    
    return answer;
}