#include<stdio.h>
int main()
{
	int arr[50],i,j,n,f,max;
	printf("Enter the number of elements in array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	f=0;
	for(j=0;j<n;j++)
	{
		int c=1;
		for(i=j+1;i<n;i++)
		{
			if(arr[j]==arr[i])
			{
				c=c+1;
				if(c>f)
				{
					max=arr[i];
				}
				
			}
		}
	}
	printf("THE MAXIMUM REPEATED  NUMBER IS %d",max);
	return 0;
}
