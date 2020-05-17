#include<stdio.h>
int lcm(int a,int b)
{
	return a*b/gcd(a,b);
}
int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	return gcd(b%a,a);
}
int main()
{
	int a,b,res;
	printf("enter two no.s to find lcm");
	scanf("%d%d",&a,&b);
	res=lcm(a,b);
	printf("the lcm of two numbers is %d",res);
	return 0;
}
