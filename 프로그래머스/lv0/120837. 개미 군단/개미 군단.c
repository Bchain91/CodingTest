#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    int a,b,c;
    a = hp/5;
    printf("%d",a);
    b = (hp%5)/3;
    printf("%d",b);
    c = (hp%5)%3;
    printf("%d",c);
    answer = a+b+c;
    return answer;
}