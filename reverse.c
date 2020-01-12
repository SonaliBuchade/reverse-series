#include<stdio.h>
# define N 10
int main()
{
int a[N]={5,34,56,26,89,7,5,76,43,11};
int i;
for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
