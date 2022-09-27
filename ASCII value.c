#include <stdio.h>
int main() 
{  
    char ch;
    printf("Enter ch: ");
    scanf("%c", &ch); 
    printf("%d is ASCII value of '%c'", ch, ch);
    return 0;
}
