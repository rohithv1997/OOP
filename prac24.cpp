#include<iostream>
using namespace std;
int fact(int);
int main()
{	int n, p;
	cout<<"Enter Number"<<endl;	
	cin>>n;
	p=fact(n);
	cout<<"Factorial="<<p<<endl;
	return 0;
}

int fact(int p)
{	if(p==1 || p==0)
		return 1;
	else
		return(p*fact(p-1));
}
