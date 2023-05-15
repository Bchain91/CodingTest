#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(100);
    char* str[50] = {0};
    char* p;
    int i = 0, j = 0;
    int lens = 0;
    char* abc[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    p = strtok(letter, " ");
    
    while(p != '\0'){
        str[i] = p;
        p = strtok(NULL, " ");
        i++;
        lens = i;
    }
    
    for(i = 0; i<lens; i++){
        for(j =0; j<26; j++){
            if(strcmp(str[i],abc[j])==0){
                answer[i] = j + 97;
                break;
            }            
        }
    }
    answer[lens] = '\0';
       
    return answer;
}