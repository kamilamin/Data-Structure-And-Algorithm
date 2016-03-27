#include<iostream>
using namespace std;

int main()
{
	int a[100], s, n,i;
	cout << "Enter The Number In Array:";
	cin >> n;
	cout<<endl;
	cout << "Enter " << n << " Integers In Array:\n";
	for ( i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter Number For Search In Array:";
	cin >> s;
	for ( i = 0; i < n; i++)
	{
		if (a[i] == s)
		{
			cout << s << " Is Present at location is " << i + 1 << endl;
			break;
		}
	}
	if (i == n)
	{
		cout << s << " Is Not Present In Array \n" << endl<<endl;
	}
	return 0;
}

