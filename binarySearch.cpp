#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n, i, beg, mid, end, item;
	cout<<"Enter Number of Elemnts = ";
	cin>>n;
	cout<<"Enter Numbers in Sorted Order = \n";
	for( i = 1; i <= n; i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter Item you Want to Search = ";
	cin>>item;
	beg = 1;
	end = n;
	mid = (beg + end)/2;
	while(beg <= end && a[mid]!= item)
	{
		if(a[mid]<item)
			beg = mid +1;
		else
			end = mid +1;
		mid = (beg+end)/2;
	}
	if(a[mid] == item)
	{
		cout<<"\nElement found at location : "<<mid<<endl;
	}
	else
	{
		cout<<"Element not found\n";
	}
	return 0;
}