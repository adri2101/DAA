#include<stdio.h>
void swap(int *a, int *b);
 void segregateEvenOdd(int arr[], int size)
{
   
    int left = 0, right = size-1;
    while (left < right)
    {
        
        while (arr[left]%2 == 0 && left < right)
            left++;
 
        
        while (arr[right]%2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
	int arr[50],i,n;
	printf("Enter the number of elements in array");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	segregateEvenOdd(arr,n);
	printf("Array after segregation ");
    for (i = 0; i <n; i++)
        printf("%d ", arr[i]);
 
    return 0;
}
