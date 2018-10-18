//Ass-2 P-4
#include<stdio.h>
int main()
{
	int ch,n,arr[20];
	printf("\nSize of the array-:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array-:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\The elements of the array you entered is-:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
	printf("\nEnter 1.Maximum Element \n2.Minimum Element \n3.Sum Of All Elements \n4.Product Of Non-Zero Elements");
	scanf("%d",&ch);
	if(ch==1)
	{
		int max=arr[0];
		for(int i=0;i<n;i++)
		{
			if(max<arr[i])
			max=arr[i];
		}
		printf("\n Maximum Element-: %d",max);
	}
	if(ch==2)
	{
		int min=arr[0];
		for(int i=0;i<n;i++)
		{
			if(min>arr[i])
			min=arr[i];
		}
		printf("\n Minimum Element-: %d",min);
	}
	if(ch==3)
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		printf("\n Sum Of Elements-: %d",sum);
	}
	if(ch==4)
	{
		int p=1;
		for(int i=0;i<n;i++)
		{
			if(arr[i]!=0)
			p*=arr[i];
		}
		printf("\n Product Of Elements-: %d",p);
	}
	return 0;
}
