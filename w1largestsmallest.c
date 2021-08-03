#include<stdio.h>
int main()
{
	int arr[50],i,n,large,small;
	printf("Enter the number of elements in array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=arr[0];
	small=arr[0];
	for(i=1;i<n;i++)
	{
		if (large<arr[i])
		{
			large=arr[i];
			
		}
		else if(small>arr[i])
		{
			small=arr[i];
		}
	}
	printf("THE LARGEST NUMBER IS %d",large);
	printf("THE SMALLEST NUMBER IS %d",small);
	return 0;
	
}

