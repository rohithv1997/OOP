#include<iostream>
#include<math.h>
using namespace std;
int main()
{	int i, a;	
	cout<<"Enter 5-digit number"<<endl;
	cin>>a;
	for(i=4;i>=0;i--)
		cout<<(int)(a/pow(10,i))<<endl;
	 return 0;
}

i
