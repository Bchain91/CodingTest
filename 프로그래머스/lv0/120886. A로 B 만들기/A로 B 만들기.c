#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    char temp;
    int i, j;
    int size = strlen(before);
    char* pStr1 = before;
    char* pStr2 = after;
    
    for(i = 0; i < size; i++){
        for(j = 0; j < size-1; j++){
            if(pStr1[j] > pStr1[j+1]){
                temp = pStr1[j];
                pStr1[j] = pStr1[j+1];
                pStr1[j+1] = temp;
            }
            if(pStr2[j] > pStr2[j+1]){
                temp = pStr2[j];
                pStr2[j] = pStr2[j+1];
                pStr2[j+1] = temp;
            }            
        }
    }
    pStr1[i] = '\0';
    pStr2[i] = '\0';
    if(!strcmp(pStr2,pStr1))
        return 1;
    else
        return 0;
}