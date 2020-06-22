#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, k, temp;
    scanf("%d", &num);
    k=num;
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    for(i=0;i<num/2;i++){
        temp=*(arr+i);
        *(arr+i)=*(arr+k-1);
        *(arr+k-1)=temp;
        k--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

// HackerRank https://www.hackerrank.com/challenges/reverse-array-c/problem //

