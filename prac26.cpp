#include<iostream>
using namespace std;
int main()
{	int a, b, c, d, e;
	cout<<"Enter a"<<endl;
	cin>>a;
	c=a++;
	b=++a;
	d=(c++)+(++b);
	e=(++d)-(a--);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"c="<<c<<endl;
	cout<<"d="<<d<<endl;
	cout<<"e="<<e<<endl;
	return 0;
}
