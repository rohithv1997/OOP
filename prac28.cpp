#include<iostream>
using namespace std;
int main()
{	int a, b;
	char c;
	cout<<"Enter a"<<endl;
	cin>>a;
	cout<<"Enter b"<<endl;
	cin>>b;
	cout<<"Enter Operator: + - * / % "<<endl;
	cin>>c;
	switch(c)
	{	case'+': cout<<"Sum="<<a+b;
			 break;
		case'-': cout<<"Difference="<<a-b;
                         break;
		case'*': cout<<"Product="<<a*b;
                         break;
		case'/': cout<<"Quotient="<<a/b;
                         break;
		case'%': cout<<"Remainder="<<a%b;
                         break;
		default: cout<<"Wrong Choice";
	}
	return 0;
}
                        
