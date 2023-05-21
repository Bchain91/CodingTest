#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int i = 0, j = 0;
    int temp;
    for(i = 0; i < sides_len; i++)
    {
        for(j = sides_len-1; j > i; j--)
        {
            if(sides[j] < sides[j-1]){
                temp = sides[j];
                sides[j] = sides[j-1];
                sides[j-1] = temp;
            }
        }
        printf("%d", sides[i]);
    }
    
    if(sides[2] < sides[0] + sides[1])
        answer = 1;
    else
        answer = 2;
    return answer;
}