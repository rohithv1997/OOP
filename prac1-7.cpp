#include<iostream>
using namespace std;
int main()
{	int a, b, c;
	cout<<"Enter 3 Numbers"<<endl;
	cin>>a>>b>>c;
	cout<<"Largest Number:";
	int m=a;
	(m<=b)&&(m=b);
	(m<=c)&&(m=c);
	cout<<m;
	return 0;
}

