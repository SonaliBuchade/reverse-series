#include<stdio.h>
int main()
{
int a[9]={34,56,26,89,7,5,76,43,11};
int i;
for(i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=8;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
