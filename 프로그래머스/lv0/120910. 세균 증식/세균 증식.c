#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    int answer = n;
    int i;
    for(i = 1; i <= t; i++)
    {
        answer *= 2;
    }
    return answer;
}