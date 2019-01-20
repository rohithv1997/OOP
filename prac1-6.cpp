#include<iostream>
#include<math.h>
using namespace std;
int main()
{	int x, n;
	float a, b, c, d;
	cout<<"Enter x, n"<<endl;
	cin>>x>>n;
	cout<<"y="<<pow(x,n)<<endl;
	cout<<"Enter a, b, c, d"<<endl;
	cin>>a>>b>>c>>d;
	cout<<"l="<<a*b-c<<endl;
	cout<<"m="<<(b/c)*a<<endl;
	cout<<"n="<<(a-b)/c+d<<endl;
	return 0;
}
