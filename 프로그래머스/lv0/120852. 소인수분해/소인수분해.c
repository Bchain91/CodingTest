#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    int array[100] = {0,};
    int i = 2,cnt = 0;
    int temp;
    while(n!=1){
        if(n % i == 0){
            n = n/i;
            if(temp != i){
                answer[cnt++] = i; 
                temp = i;
            }
                
        }else{
            i++;
        }
    }
    return answer;
}