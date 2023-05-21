#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* str = my_string;
    int size = strlen(my_string);
    char* answer = (char*)malloc(size);
    int flag[110] = {0};
    int i, j;
    for(i = 0; i < size; i++){        
        for(j = i+1; j < size; j++){
            if(str[i]==str[j])
                flag[j] = 1;
        }            
    }
    j = 0;
    for(i = 0; i < size; i++){
        if(!flag[i]){
            answer[j++] = str[i];            
        }
    }
    answer[j] = '\0';
    return answer;
}