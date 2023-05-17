#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int i, j;
    int temp;
    if(numbers_len == 2)
        return answer = numbers[0]*numbers[1];    
    for(i = 0; i < numbers_len; i++)
    {
        for(j = 0; j < numbers_len-1; j++)
        {
            if(numbers[j] > numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    if(numbers[0]*numbers[1] > numbers[numbers_len-1]*numbers[numbers_len-2])
        answer = numbers[0]*numbers[1];    
    else
        answer = numbers[numbers_len-1]*numbers[numbers_len-2];
    
    return answer;
}