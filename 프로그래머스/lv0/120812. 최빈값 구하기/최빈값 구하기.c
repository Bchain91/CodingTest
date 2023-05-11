#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int cnt = 0;
    int max = 0;
    int i, j;
    
    for(i=0; i < array_len; i++){
        cnt = 0;
        for( j=0; j < array_len; j++){
            if(array[i] == array[j]){
                cnt++;
            }
        }
       
        if(max<cnt){
            max = cnt;
            answer = array[i];
        } else if(max == cnt && answer != array[i]){
            answer = -1;
        }
    }
    
   
    return answer;
}
