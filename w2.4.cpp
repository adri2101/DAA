#include <iostream> 
using namespace std;

int main()
{
int n;
cout<<"Enter matrix size:\n";
cin>>n;
int a[n][n];

cout<<"Enter matrix elements:\n"; for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++) cin>>a[i][j];
}

cout<<"The Matrix is:\n"; for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{cout<<a[i][j]<<" ";} cout<<"\n";
}

int choice;
cout<<"Enter 1 for Number of non zero elements\n"; cout<<"Enter 2 for Sum above leading diagonal\n";
cout<<"Enter 3 for Elements below minor diagonal\n"; cout<<"Enter 4 for Product of diagonal elements\n"; cout<<"Enter choice:\n";
cin>>choice;

switch(choice)
{
case 1:
{
int count=0;
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
if(a[i][j]>0) count+=1;
}
}

cout<<"Number of non zero elements is\n"<<count; break;
}

case 2:
{
int sum=0;
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
if(j>i)
sum+=a[i][j];
}
}

cout<<"Required Sum:\n"; cout<<sum;
break;
}

case 3:
{
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
if(j<i)
cout<<a[i][j]<<" ";
}
}

break;
}

case 4:
{
int product = 1;
for (int i = 0; i < n; i++) {

product = product * a[i][i];

product = product * a[i][n - i - 1];
}

product = product / a[n / 2][n / 2];

cout<<product;
break;
}

default:
{
cout<<"Wrong choice!!"; 
break;
}
}
}
