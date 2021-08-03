#include<stdio.h>
int main()
{
	int arr[50],i,n,temp;
	printf("Enter the number of elements in array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < n; i += 2)
    {

        if (i + 1 ==n)
        {
            break;
        }

        
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    printf("\nArray after exchanging adjacent numbers is done : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
    
