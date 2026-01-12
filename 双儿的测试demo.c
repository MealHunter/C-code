#include <stdio.h>
#include <math.h>
int main()
{
int a[10],b[10],n=10,k,m;
double av,sk,g=2.41;
double sum=0,sksum=0,max=0,skb=0;
printf("请输入10个数据:");
for(k=0;k<10;k++)
{
scanf("%lf",&a[k]);   
}
for(k=0;k<n-1;k++)
{
for(m=0;m<n-1-1;m++)
if(a[k]>a[k+1])   
{max=a[k];a[k]=a[k+1];a[k+1]=max;}
}
loop:for(k=0;k<n;k++)
{
sum+=a[k];     
}
av=sum/n;   
for(k=0;k<n;k++)
{
b[k]=a[k]-av;  
if(b[k]<0)
b[k]=-b[k];    
else 
break;
for(k=0;k<n;k++)
{
sksum+=(a[k]*a[k]-n*av*av)/n-1;
}
sk=sqrt(sksum);
}
skb=g*sk;
if(max>skb)
{
	n=n-1;    
goto loop;}
else
for(k=0;k<10;k++)
{
	printf("%lf",a[k]);
}
return 0;
}
