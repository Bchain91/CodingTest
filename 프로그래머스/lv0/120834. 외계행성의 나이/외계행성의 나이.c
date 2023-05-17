#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(4);
    int diff = 97;
    int array[4] = {'\0'};
    int i = 0;
    
    array[0] = age/1000 + diff;
    array[1]= (age%1000)/100 + diff;
    array[2] = (age%100)/10 + diff;
    array[3] = age%10 + diff;
    
    if(age >= 1000)
    {
        for(i = 0; i < 4; i++)
        {
            answer[i] = array[i];               
        }            
        answer[4] = '\0';
    }else if(age >=100){
        for(i = 0; i < 3; i++)
        {
            answer[i] = array[i+1];
        }
        answer[3] = '\0';
    }else if(age >= 10){
        for(i = 0; i< 2; i++)
        {
            answer[i] = array[i+2];
        }
        answer[2] = '\0';
    }else{
        answer[i] = array[3];
        answer[1] = '\0';
    }
       
    return answer;
}