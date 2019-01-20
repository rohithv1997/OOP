#include<iostream>
using namespace std;
void increment(int []);
int n=0;
int main()
{	int array[100], i;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"Enter Elements"<<endl;
	for(i=0;i<n;i++)
		cin>>array[i];
	increment(array);
	cout<<"After Increment"<<endl;
	for(i=0;i<n;i++)
		cout<<array[i]<<' ';
	return 0;
}
void increment(int array[100])
{	int i;
	for(i=0;i<n;i++)
		if(array[i]<=20000)
			array[i]+=0.03*array[i];
}

