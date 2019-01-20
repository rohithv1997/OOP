#include<iostream>
using namespace std;
int main()
{	int m, n, p, q;
	cout<<"Enter Matrix 1 Dimensions (Rows and Columns)"<<endl;
	cin>>m>>n;
	cout<<"Enter Matrix 2 Dimensions"<<endl;
	cin>>p>>q;
	if(n!=p)
	{	cout<<"Dimensions Mismatch!!"<<endl;
		main();
	}
	int a[10][10]={0}, b[10][10]={0}, c[10][10]={0}, i, j, k;
	cout<<"Enter Matrix 1"<<endl;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	cout<<"Enter Matrix 2"<<endl;
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			cin>>b[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
			for(k=0;k<n;k++)
				c[i][j]+=(a[i][k]*b[k][j]);
	cout<<"Matrix 3"<<endl;
	for(i=0;i<m;i++)
	{	for(j=0;j<q;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

