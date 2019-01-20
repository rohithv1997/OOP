#include<iostream>
using namespace std;
void sum(int no1, int no2, int no3=0, int no4=0)
{	cout<<"Sum = "<<no1+no2+no3+no4<<endl;
}

int main()
{	sum(1,2);
	sum(1,2,3);
	sum(1,2,3,4);
	return 0;
}

	
