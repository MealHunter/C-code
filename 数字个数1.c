#include<stdio.h>
#include<math.h>
main()
{
	double b,c,d[10]={0,0,0,0,0,0,0,0,0,0},n,i;double a;
	scanf("%d",&a);
	for(i=0;i<16;i++)
	{a=a%pow(10,i);
	d[a]++;
	if(a<1)break;
	}
	for(c=0;c<10;c++)
	{if(d[c]!=0)
	printf("%d¸ö%d\n",d[c],c);}
}