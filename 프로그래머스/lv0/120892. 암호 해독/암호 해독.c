#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* cipher, int code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = strlen(cipher);
    char* str = cipher;
    char* answer = (char*)malloc(size+1);
    int i, cnt=0;
    
    for(i = 0; i < size; i++){
        if((i+1)%code==0)
            answer[cnt++] = str[i];
    }
    answer[cnt] = '\0';
    return answer;
}