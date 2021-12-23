#include<stdio.h>
int main()
{
	int i,s,a[100],key;
	printf("Value: ");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key: ");
	scanf("%d",&key);
	for(i=0;i<s;i++)
	{
		if (a[i]==key)
		{
			printf("%d",i);
			break;
		}
		else
		{
			continue;
		}
		
		
	}
}
