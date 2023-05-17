#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    int i, j, cnt=0;
    int temp;
    int* answer = (int*)malloc(sizeof(int)*len);
    
    for(i = 0; i < len; i++){
        if(my_string[i] >= 48 && my_string[i] <= 57){
            answer[cnt++] = my_string[i] - 48;
        }
    }
    
    for(i = 0; i < cnt; i++){
        for(j = 0; j < cnt-1; j++){
            if(answer[j] > answer[j+1]){
                temp = answer[j];
                answer[j] = answer[j+1];
                answer[j+1] = temp;
            }
        }
    }
    
    if(cnt ==0)
        answer[0] = 0;
    
    return answer;
}