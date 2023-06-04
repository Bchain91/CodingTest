#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
long long solution(const char* numbers) {
    long long answer = 0;
    char* cNum[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char* num = "0123456789";
    char* pNumbers = numbers;
    char* ptr;
    char temp[50] = {0};
    int size = strlen(pNumbers);
    int i, cnt=0;
    
    for(i=0; i < 10; i++)
    {
        ptr = strstr(pNumbers, cNum[i]);
        while(ptr!=NULL){
            *ptr = num[i];
            ptr = strstr(ptr + 1, cNum[i]);
        }
    }
    
    for (i = 0; i<size; i++)
    {
        if(pNumbers[i] < 'a')
        {
            temp[cnt] = pNumbers[i];
            cnt++;
        }
    }

    answer = atoll(temp);
    return answer;
}