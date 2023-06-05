#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int size = strlen(my_string);
    int answer = 0;
    int i, temp;
    int flag = 1;
    
    for(i=0; i<size; i++){        
        temp = atoi(my_string+i);        
        if(flag){
            answer += temp;
            flag = 0;
        }
        if(temp == 0)
            flag = 1;     
    }
    return answer;
}