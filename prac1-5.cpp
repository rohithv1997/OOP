#include<iostream>
using namespace std;
int main()
{	int n, p=1, i;
	cout<<"Enter Number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
		p*=i;
	cout<<"factorial="<<p;
	return 0;
}













