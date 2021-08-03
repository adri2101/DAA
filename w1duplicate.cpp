#include<stdio.h>
int main()
{
	int arr[50],i,j,n;
	printf("Enter the number of elements in array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int c=0;
	for(j=0;j<n;j++)
	{
		for(i=j+1;i<n;i++)
		{
			if(arr[j]==arr[i])
			{
				c=c+1;
				break;
				
			}
		}
	}
	printf("TOTAL NUMBER OF DUPLICATES ARE %d",c);
	return 0;
}
