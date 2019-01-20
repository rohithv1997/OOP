#include<iostream>
using namespace std;
int main()
{	int a=-1, b=1, c=0, n;
	cout<<"Fibonacci Series : Enter Range"<<endl;
	cin>>n;
	cout<<"Enter Choice: \n1. for \n2. while \n3. do-while\n";
	cin>>c;	
	if(c==1)
	{	c=0;
		for(;c<=n;)
		{	c=a+b;
			if(c<=n)
				cout<<c<<" ";
			a=b;
			b=c;
		}
	}
	else if(c==2)
	{	c=0;
		while(c<=n)
		{	c=a+b;
			if(c<=n)
				cout<<c<<' ';
			a=b;
			b=c;
		}
	}
	else if(c==3)
	{	c=0;
		do{	c=a+b;
			if(c<=n)
			{	cout<<c<<' ';
				a=b;
				b=c;
			}
		  }while(c<=n);
	}
	else 
	{	cout<<"Wrong Choice";
		main();
	}
	return 0;
}
