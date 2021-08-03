#include<stdio.h>
int getMissingNumber(int arr[], int n)
{

    int m = n + 1;
    int total = m*(m + 1)/2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return total - sum;
}
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
	printf("The missing number is %d", getMissingNumber(arr, n));
	return 0;
}
