//recursion program.
#include<stdio.h>
#include<math.h>
int fact(int num)
{
	if(num==0 || num==1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}

long poww(int x,int y)
{
	if(y)
	{
		return x*poww(x,y-1);
	}
	return 1;
}

int binsearch(int arr[],int lo,int hi,int key)
{
	int mid;
	if(lo>hi)
	{
		return 0;
	}
	mid=(lo+hi)/2;
	if(arr[mid]==key)
	{
		printf("Element found");
	}
	else if(arr[mid]>key)
	{
		binsearch(arr,lo,mid-1,key);
	}
	else if(arr[mid]<key)
	{
		binsearch(arr,mid+1,hi,key);
	}
}

int main()
{
	int ch;
	printf("\n-----RECUERSION PROGRAM-----");
	printf("\nEnter 1.Factorial \n2. X raised to power Y \n3.Perform binary search ");
	scanf("%d",&ch);
	if(ch==1)
	{
		int result;
		int num;
		printf("\nEnter a number-:");
		scanf("%d",&num);
		result=fact(num);
		printf("\nFactorial of the number is-: %d",result);
	}
	if(ch==2)
	{
		int x,y;
		long result;
		printf("\nEnter a number X-:");
		scanf("%d",&x);
		printf("\nEnter the power-:");
		scanf("%d",&y);
		result=poww(x,y);
		printf("\n X raised to power Y is-: %d",result);
	
	}
	if(ch==3)
	{
		int arr[10],key,result;
		printf("\nEnter 10 elementsin the array-:");
		for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
		printf("\nEnter the key element to be searched -:");
		scanf("%d",&key);
		binsearch(arr,0,10,key);
		
	
	}
	return 0;
}
