#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1000);
    int len = strlen(my_string);
    printf("%d",len);
    int i = 0;
    int cnt = 0;
    for(i = 0; i < len; i++)
    {
        answer[cnt] = my_string[i];
        if(!(my_string[i] == 'a'||
          my_string[i] == 'e'||
          my_string[i] == 'i'||
          my_string[i] == 'o'||
          my_string[i] == 'u'))
            cnt++;        
    }
    answer[cnt] = '\0';
    return answer;
}