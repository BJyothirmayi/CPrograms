#include<stdio.h>
int main()
{
	int a,i,sum=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a);
	sum+=a;	
	}
	printf("%d",sum);
	printf("the sum is %d\n",sum);
	
	return 0;
}
