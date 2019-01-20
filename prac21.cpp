#include<iostream>
using namespace std;
int main()
{	int i, j, a;
	cout<<"Pattern 1"<<endl;
	for(i=1;i<=5;i++)
	{	for(j=1;j<=5;j++)		
			if(i==1 || i==5 || j==1 || j==5)
				cout<<"* ";
			else
				cout<<"  ";
		cout<<endl;
	}
	cout<<endl<<endl<<endl<<"Pattern 2"<<endl;
	a=4;
	for(i=1;i<=3;i++)
	{	for(j=1;j<=a;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<"* ";
		for(j=i-1;j>=1;j--)
			cout<<"* ";
		cout<<endl;
		a-=2;
	}
	a=4;
	for(i=1;i<=3;i++)
	{	for(j=1;j<=a;j++)
			cout<<' ';
		cout<<"*"<<endl;
	}
	cout<<endl<<endl<<endl<<"Pattern 3"<<endl;
	for(i=1;i<=3;i++)
	{	for(j=1;j<=a;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
			if(j%2==1)
				cout<<"* ";
			else 
				cout<<"  ";
		for(j=i-1;j>=1;j--)
			if(j%2==1)
				cout<<"* ";
			else
				cout<<"  ";
		a-=2;
		cout<<endl;
	}
	a+=4;
	for(i=2;i>=1;i--)
	{	for(j=1;j<=a;j++)
			cout<<' ';
		for(j=1;j<=i;j++)
			if(j%2==1)
				cout<<"* ";
			else
				cout<<"  ";
		for(j=i-1;j>=1;j--)
			if(j%2==1)
				cout<<"* ";
			else
				cout<<"  ";
		a+=2;
		cout<<endl;
	}
	return 0;
}

