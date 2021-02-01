#include<stdio.h>
int main()
{
    char a[100];
    int i=0,count=0;
    printf("Enter the string \n");
    scanf("%s",a);
    for(i = 0;i<sizeof(a)/sizeof(a[0]-1);i++)
    {
        if(a[i]==a[i+1])
        count++;
    }
    printf("%d",count);
}