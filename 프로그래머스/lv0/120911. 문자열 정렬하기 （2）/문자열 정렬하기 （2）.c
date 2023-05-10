#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = strlen(my_string);
    char* answer = (char*)malloc(size + 1);
    char diff = 'a'-'A';
    char temp;
    int i, j;
    
    for(i=0; i<size; i++)
    {
        if(my_string[i] < 'a')
            answer[i] = my_string[i] + diff;
        else
            answer[i] = my_string[i];  
    }    
    
    for(i=0; i<size; i++){
        for(j=0; j<size-1; j++){
            if(answer[j]>answer[j+1]){
                temp = answer[j];
                answer[j] = answer[j+1];
                answer[j+1] = temp;                
            }
        }
    }   
    answer[i] = '\0';
                
    return answer;
}