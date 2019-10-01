//sort words in lexicographical order.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20][10],temp[10];
	printf("\nEnter list of names-:");
	for(int i=0;i<=9;i++)
	{
		scanf("%s",&str[i]);
	}
	
	for(int i=0;i<=8;i++)
	{
		for(int j=i+1;j<=9;j++)
		{	
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
				
			}
		}
	}
	printf("\nList of names in lexicographical order- : ");
	for(int i=0;i<=9;i++)
	{
		printf("%s",&str[i]);
		printf("\n");
	}
	
	return 0;
	
			
}
