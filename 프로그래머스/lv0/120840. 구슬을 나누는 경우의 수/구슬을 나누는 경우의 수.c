#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    long answer = 1;
    long temp1 = 1;
    long temp2 = 1;
    int i = 0;
    if(balls == share)
        answer = balls/share;
    else{    
        for(i=0; i < share; i++)
        {
            temp1 = (balls-i);
            temp2 = i+1;
            answer = answer *temp1/temp2;
        }    
    }
    return answer;
}