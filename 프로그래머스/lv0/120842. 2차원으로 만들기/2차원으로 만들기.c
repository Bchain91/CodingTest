#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int** solution(int num_list[], size_t num_list_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int i, j;
    int cnt = -1;
    
    int** answer = (int**)malloc(num_list_len/n*sizeof(int*));
    for (i = 0; i< num_list_len/n; i++)
        answer[i] = (int*)malloc(n * sizeof(int));
        
    for(i=0; i < num_list_len; i++)
    {
        if(i%n == 0)
            cnt++;
        answer[cnt][i%n] = num_list[i];
        
        printf("%d %d\n" , cnt, i%n);
        printf("%d %d\n",answer[cnt][i], num_list[i]);
    }
    
    return answer;
}