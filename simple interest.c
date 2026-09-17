#include<stdio.h>
int main() //function
{
	int p;
	int r;
	int n;
	int interest;
	printf("enter p:");
	scanf("%d",&p);
	printf("enter r:");
	scanf("%d",&r);
	printf("enter n:");
	scanf("%d",&n);
	interest=p*r*n/100;
	printf("simple interest:%d",interest);
}
