#include<iostream>
#include<math.h>
using namespace std;
int main()
{	int a, flag=0;
	cout<<"Enter Number"<<endl;
	cin>>a;
	int i;
	for(i=1;pow(2,i)<=a;i++)
		if(pow(2,i)==a)	
		{	cout<<a<<" is a multiple of 2"<<endl;
			flag=1;
		}
	if(!flag)
		cout<<a<<" is not a multiple of 2"<<endl;
	return 0;
}
		
			
