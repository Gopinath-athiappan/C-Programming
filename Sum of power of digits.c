#include<stdio.h>
#include<math.h>
int main()
{
	int number,digit1,digit2;
	int sum=0;
	scanf("%d",&number);
	while(number)
	{
		digit1=number%10;
		number /=10;
		digit2=number%10;
		sum+=pow(digit1,digit2);
	} 
	printf("%d",sum);
}
