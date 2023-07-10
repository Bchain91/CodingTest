#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i;
    for(i=n; i>=1; i--)
    {
        if(n%i == 1)
        {
            answer = i;            
        }
    }
    return answer;
}