#include<stdio.h>
main()
{
	int a[10]={9,4,8,0,2,1,6,5,7,3},i,t=0,d=0,b[10],sum1=0,sum2=0,c[10];
	for(i=0;i<10;i++)
	{if(a[i]%2==0)
	{b[t]=a[i];
	sum1=sum1+b[t];
	t++;}
	if(a[i]%2==1)
	{c[d]=a[i];
	sum2=sum2+c[d];
	d++;}}
	printf("偶数个数：%d\n偶数平均数：%d\n",t,sum1/t);
	printf("奇数个数：%d\n奇数平均数：%d\n",d,sum2/d);
}