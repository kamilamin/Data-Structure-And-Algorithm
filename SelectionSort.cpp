#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int c, p, s, n, d;
	cout<<"Enter Numbers Of Elements\n";
	cin>>n;
	cout<<"Enter "<<n<<" Intergers\n";
	for( c = 0; c < n; c++)
	{
		cin>> a[c];
	}
	for( c = 0; c < (n-1); c++)
	{
		p = c;
		for(int d = c+1; d < n; d++)
		{
			if(a[p] > a[d])
			p = d;
		}
		if(p != c)
		{
			s = a[c];
			a[c] = a[p];
			a[p] = s;
		}
	}
	cout<<"Sorted List in Ascending Order: \n";
	for(c = 0; c < n; c++)
	cout<<a[c]<<"\n";
	return 0;
}