#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    char* ptr;
    char* pArray[50] = {0};
    int i = 0;
    unsigned int temp1, temp2;
    ptr = strtok(my_string, " ");
    
    while(ptr!=NULL){
        pArray[i++] = ptr;
        ptr = strtok(NULL, " ");        
    }
    answer = atoi(pArray[0]);
    i = 0;
    while(pArray[i]!=NULL){
        if(!strcmp(pArray[i],"+"))
            answer += atoi(pArray[i+1]);
        else if(!strcmp(pArray[i],"-"))
            answer -= atoi(pArray[i+1]);
        i++;
    }
    return answer;
    
}