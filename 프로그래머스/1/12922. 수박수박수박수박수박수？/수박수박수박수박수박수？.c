#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    const char* su = "수";
    const char* bak = "박";
    char* answer = (char*)malloc(n*3+1);
    answer[0] = '\0';
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
        {
            strcat(answer, su);
        }
        else
        {
            strcat(answer, bak);
        }
    }
    return answer;
}