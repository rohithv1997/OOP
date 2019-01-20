//To implement arithmetic operations using switch case
#include<iostream>
using namespace std;
int main()
{	int a, b;
	cout<<"Enter 2 Numbers a and b respectively"<<endl;
	cin>>a>>b;
	char c;
	cout<<"Enter Operation : \n + (Addition) \n - (Subtraction) \n * (Multiplication \n / (Division) \n %  Remainder\n Enter Choice\n";
	cin>>c;
	switch(c)
	{	case '+': cout<<a<<"+"<<b<<"="<<a+b<<endl;
			  break;
		case '-': cout<<a<<"-"<<b<<"="<<a-b<<endl;
			  cout<<b<<"-"<<a<<"="<<b-a<<endl;
			  break;
		case '*': cout<<a<<"*"<<b<<"="<<a*b<<endl;
			  break;
		case '/': cout<<a<<"/"<<b<<"="<<a/b<<endl;
			  cout<<b<<"/"<<a<<"="<<b/a<<endl;
			  break;
		case '%': cout<<a<<"%"<<b<<"="<<a%b<<endl;
			  cout<<b<<"%"<<a<<"="<<b%a<<endl;
			  break;
		default:  cout<<"Wrong Choice"<<endl;
			  main();
	}
	return 0;
}

