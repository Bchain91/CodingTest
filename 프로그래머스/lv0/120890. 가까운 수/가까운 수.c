#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    int i;
    int diff, temp;
    answer = array[0];
    diff = n - array[0];
    if(diff < 0)
        diff = -diff;
    for(i = 0; i<array_len; i++)
    {
        if(array[i] - n < 0){
            temp = -(array[i] - n);
        }else{
            temp = array[i] - n;
        }
        
        if(diff == temp){
            if(answer > array[i])
                answer = array[i];
            
        }
        else if(diff > temp){
            diff = temp;
            answer = array[i];
        }
    }
    return answer;
}