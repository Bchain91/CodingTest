#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    char* str;
    char * pArray[200]={0};
    int i = 0;
    
    str = strtok(s," ");

    while(str != NULL)
    {
        pArray[i] =  str;
        if(++i >= 200)
            break;
        str = strtok(NULL," ");
    }
    
    for(i = 0; i < 200; i++)
    {
        if(pArray[i]!=NULL){
            if(!strcmp(pArray[i],"Z")){
                answer = answer - atoi(pArray[i-1]);
            }else{
                answer = answer + atoi(pArray[i]);
            }                
        }else{
            break;
        }            
    }
    
    return answer;
}