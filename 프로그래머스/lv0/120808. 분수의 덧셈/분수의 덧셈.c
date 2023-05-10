#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(2 * sizeof(int));
    int a, b, i;
    
    a = numer1 * denom2 + numer2 * denom1;
    b = denom1 * denom2;
    
    for (i = 2; i <= b; i++){        
        while(a%i==0 && b%i ==0){
            a = a/i;
            b = b/i;
        }                
    }
        
    answer[0] = a;
    answer[1] = b;

    return answer;
}