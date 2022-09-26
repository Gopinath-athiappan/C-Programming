
#include <stdio.h>
int main() 
{
    int num,multi,upto;
    printf("enter multi and upto\n");
    scanf("%d %d",&multi,&upto);
    num=0;
    while(num<=upto)
    {
        printf("%d*%d=%d\n",multi,num,multi*num);
        num=num+1;
    }
    return 0;
}
