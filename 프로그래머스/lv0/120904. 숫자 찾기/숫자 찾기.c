#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = -1;
    int i = 1;
    int temp = 0;
            
    while(num!=0){
        if(num==k){
            answer = 1;
            break;
        }            
        if(num%10 == k)
            temp = i;
        num /= 10;
        i++;
        printf("%d ", num);
    }
    
    if(temp!=0)
        answer = i - temp;
            
    return answer;
}