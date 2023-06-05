#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* bin1, const char* bin2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(20);
    char buf[100] = {0};
    int t1, t2, temp, i, cnt = 0; 
    
    t1 = strtol(bin1, NULL, 2);
    t2 = strtol(bin2, NULL, 2);
    temp = t1 + t2;
    if(temp == 0)
    {
        buf[0] = 48;
    }else{
        while(temp != 0){
        buf[cnt++] = (temp % 2) + 48;
        temp /= 2;
        }    
    }
        
    cnt = 0;
    for(i = strlen(buf)-1; i >= 0; i--){
        answer[cnt++] = buf[i];
    }
    answer[cnt] = '\0';
    return answer;
}