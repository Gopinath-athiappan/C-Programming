#include <stdio.h>

void update(int *a,int *b) 
{
  return *a,*b;     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Enter values of a , b");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a+b, abs(a-b));

    return 0;
}
