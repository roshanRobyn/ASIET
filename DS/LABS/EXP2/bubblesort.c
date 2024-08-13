#include<stdio.h>
void main()
{
	int a[10],temp=0,len,i=0,j=0,n;
	printf("enter the array length");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		printf("enter the elements");
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the sorted array is: ");
	for(i=0;i<len;i++)
	{
		printf("%d  ",a[i]);
	}	
}
