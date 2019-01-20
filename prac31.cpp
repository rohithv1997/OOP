#include<iostream>
using namespace std;

class stock_check{ 	static int stock;
			
			public:	void input(int);
				void output();
		};

void stock_check::input(int a=0)
{	if(a!=0)
	{	switch(a)
		{	case 1: ++stock;		
				break;
			case 2: --stock;
				break;
			default: cout<<"Wrong Choice"<<endl;
		}
	}
	else if(a==0)
	{	cout<<"Enter Stock Count"<<endl;
		cin>>stock;
	}
}

void stock_check::output()
{	if(stock<20)
		cout<<"Insufficient Storage"<<endl;
	cout<<"Stock Count = "<<stock<<endl;
}

void update_stock();

stock_check obj;

int main()
{	obj.input(0);
	update_stock();
	obj.output();
	return 0;
}
void update_stock()
{	int a;
	cout<<"1. Increment Stock"<<endl;
        cout<<"2. Decrement Stock"<<endl;
	cout<<"3. Exit"<<endl;
        cout<<"Enter Choice"<<endl;
        cin>>a;
	if(a<1 || a>3)
		cout<<"Wrong Choice"<<endl;
	else if(a!=3)
		obj.input(a);
}		
