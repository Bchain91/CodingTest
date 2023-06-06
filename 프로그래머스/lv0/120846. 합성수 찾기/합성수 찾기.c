#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i, j;
    int cnt = 0;
    for(i = 1; i <= n; i++)
    {
        cnt = 0;
        for (j = 1; j <= i; j++)
        {
            if(i%j == 0)
            {
                cnt++;
            }
        }
        if(cnt >= 3)
            answer++;
        
    }
        
            
            
    
    return answer;
}