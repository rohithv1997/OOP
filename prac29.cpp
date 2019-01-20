#include<iostream>
using namespace std;
int main()
{	int sum=0, n, arr[100]={0}, i;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"Enter Elements"<<endl;
	for(i=0;i<n;i++)
	{	cin>>arr[i];
		sum+=arr[i];
	}
	cout<<"Sum="<<sum<<endl;
	cout<<"Array in Reverse"<<endl;
	for(i=n-1;i>=0;i--)
		cout<<arr[i]<<' ';
	return 0;
}

