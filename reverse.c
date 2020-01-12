#include<stdio.h>
int main()
{
int a[10]={5,34,56,26,89,7,5,76,43,11};
int i;
for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=9;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
