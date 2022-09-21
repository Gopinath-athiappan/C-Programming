
#include <stdio.h>

int main() 
{
    int num,rev,temp;
    scanf ("%d",&num);
    rev =0;
    temp=num;
    while(num>0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    if (temp==rev)
        printf("Pallindrome");
    else
        printf("Not a Pallindrome");
    return 0;
}
