#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        for(j=N;j>=1;j--)
    {
        printf("%d ",j);
        
    }
    printf("
");
    }
    return 0;
}