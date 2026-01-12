#include<stdio.h>
main()
{
	int n,ge,shi,bai,qian,wan,t,p;
	scanf("%d",&n);
	ge=n%10;
	shi=n/10%10;
	bai=n/100%10;
	qian=n/1000%10;
	wan=n/10000%10;
	t=ge+shi+bai+qian+wan;
	ge=t%10;
	shi=t/10%10;
	p=ge+shi;
	printf("%d",p);
}