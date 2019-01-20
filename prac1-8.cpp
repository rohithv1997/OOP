#include<iostream>
using namespace std;
int main()
{	int m,n;
	cout<<"Enter m, n"<<endl;
	cin>>m>>n;
	if(m%n==0)
		cout<<m<<" is a multiple of "<<n<<endl;
	else
		cout<<m<<" is not a multiple of "<<n<<endl;
	return 0;
}
