#include <stdio.h>
void main()
{
	int n,a=1;
	scanf("%d",&n);
	top:
	if (a<=n)
		{
			printf("%d ",a);
			a=a+1;
			goto top;
		}
}
