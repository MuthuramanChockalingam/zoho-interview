#include<stdio.h>

void main()
{
    int N , i, j, min;
    printf("Enter the value for N:");
    scanf("%d",&N);
    
    for (i = 1; i <= N; i++)
    { 
        for (j = 1; j <= N; j++)
        { 
            min = i < j ? i : j;
            printf("%d",N-min+1);
            printf(" ");
        }
        printf("\n");
    }
}