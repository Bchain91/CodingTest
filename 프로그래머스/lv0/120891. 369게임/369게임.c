#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    int array[6] = {0};
    
    array[0] = (order%1000000)/100000;
    array[1] = (order%100000)/10000;
    array[2] = (order%10000)/1000;
    array[3] = (order%1000)/100;
    array[4] = (order%100)/10;
    array[5] = order%10;
    
    for(int i = 0; i < 6; i++){
        if(array[i] != 0)
            if(array[i]%3 == 0)
                answer++;
    }
    return answer;
}