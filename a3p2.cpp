//Ass-3 P1
#include<stdio.h>
void merge(int arr1[],int arr2[],int n1,int n2,int arr3[])
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];
		}
		else arr3[k++]=arr2[j++];
		 
	}
	while(i<n1)
	{
			arr3[k++]=arr1[i++];
		
	}
	while(j<n2)
	{
		arr3[k++]=arr2[j++];
		
	}
	printf("\nMerged and sorted elements are as follows-:");
	for(int s=0;s<(n1+n2);s++)
	{
		printf("%d",arr3[s]);
		printf("\n");
	}
	if((n1+n2)%2==0)
	{
		int x=(n1+n2)/2;
		printf("\nmedian is-: %d",arr3[x]);
	}
	else
	{
		int x=(n1+n2+1)/2;
		printf("\nmedian is-: %d",arr3[x-1]);
	}
}
int main()
{
	int a[10],b[10],c[20],n1,n2;
	printf("\nEnter the size of array1-:");
	scanf("%d",&n1);
	printf("\nEnter the elements of array1-:");
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the size of array2-:");
	scanf("%d",&n2);
	printf("\nEnter the elements of array2-:");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	merge(a,b,n1,n2,c);
	return 0;
}
