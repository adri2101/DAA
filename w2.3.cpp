#include <bits/stdc++.h>
using namespace std;
void find3Numbers(int A[], int arr_size, int sum)
{
	int l, r;
	for (int i = 0; i < arr_size - 2; i++)
	 {
		l = i + 1; 
		r = arr_size - 1; 
		while (l < r) 
		{
			if (A[i] + A[l] + A[r] == sum) 
			{
				cout<<i<<l<<r;
				break;
			}
			else if (A[i] + A[l] + A[r] < sum)
				l++;
			else 
				r--;
		}
		
	}

}
int main()
{
int n;
cout<<"Enter limit\n";
cin>>n;
int a[n];
cout<<"Enter array elements in sorted order:\n";
for(int i=0; i<n; i++)
cin>>a[i];
int k=0;
cout<<"Enter key:\n";
cin>>k;
find3Numbers(a, n, k);
return 0;
}

	
	
	
