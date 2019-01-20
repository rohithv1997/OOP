#include<iostream>
using namespace std;

class array{	int n;
		int *arr;
		
		public:	array(int);
			int* operator [](int);
	   };

array a(10);

array::array(int a)
{	n=a;
	arr=new int[a];
}

int* array::operator [](int index)
{	if(index<0 || index>=n)
	{	cout<<"Out of Bounds!!!"<<endl;
		return 0;
	}
	else
		return (arr+index*sizeof(int));
}

int main()
{	for(int i=0;i<=10;i++)
	{	*a[i]=i;
		cout<<*(a[i])<<endl;
	}
	return 0;
}	
