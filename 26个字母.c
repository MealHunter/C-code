#include<stdio.h>
main()
{
	int a,b,c;
	char ch='A';
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=a-b+1;c++)
		{
			printf("%c",ch);
			ch++;
			if(ch==91)
				ch=97;
			if(ch>=123||ch<=64)
				ch=63;
		}
		printf("\n");
		if(ch>=123);
	}
}