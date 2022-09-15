#include <stdio.h>

int main()
{
    int fac,b,c;
    printf("Enter fac");
    scanf("%d",&fac);
    b=fac/5;
  if(b>=5)
        {
            b=b+(b/5);
        }
    
    printf("%d",b);

    return 0;
}

