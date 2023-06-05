#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    int size, l;
    char buf[100000];
    char cK = k+48;
    for(i; i <= j; i++)
    {
        size = sprintf(buf, "%d", i);
        for(l = 0; l<size; l++)
        {
            if(buf[l] == cK)
                answer++;
        }            
    }
    return answer;
}