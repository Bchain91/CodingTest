#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    int i = 0;
    for(i=0; i<signs_len; i++)
    {
        if(!(signs[i]))
            absolutes[i] = -(absolutes[i]);
        answer += absolutes[i];
    }
    return answer;
}