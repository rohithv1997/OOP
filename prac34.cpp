#include<iostream>
using namespace std;

class me{ 	public:	int a;
			void operator ++();
			void operator --();
			void in();
			void out();
	};

void me::in()
{	cout<<"Enter a"<<endl;
	cin>>a;
}

void me::out()
{	cout<<"a = "<<a<<endl;
}

void me::operator ++()
{	a+=4;
}

void me:: operator --()
{	a-=4;
}

int main()
{
	me x;
	x.in();
	++x;
	x.out();	
	--x;
	x.out();
	return 0;
}

