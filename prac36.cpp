#include<iostream>
using namespace std;

class shape{	protected: int height, width;
		
		public: virtual void area()
			{	cout<<"Enter Height and Width"<<endl;
				cin>>height>>width;
				cout<<"Shape Area = "<<height*width<<endl;
			}
	   };

class rectangle : public shape
{	public:	void area()
		{	cout<<"Enter Height and Width"<<endl;
			cin>>height>>width;
			cout<<"Rectangle Area = "<<height*width<<endl;
		}
}r;

class square : public shape
{	public: void area()
		{	cout<<"Enter Width"<<endl;
			cin>>height;
			cout<<"Square Area = "<<height*height<<endl;
		}
}s;

class triangle : public shape
{	public : void area()
		{	cout<<"Enter Height and Width"<<endl;
			cin>>height>>width;
			cout<<"Triangle Area = "<<(float)(height*width)/2<<endl;
		}
}t;

class circle : public shape
{	public: void area()
		{ 	cout<<"Enter Radius"<<endl;
			cin>>width;
			cout<<"Circle Area = "<<(float)(22/7*width*width)<<endl;		}
}c;

int main()
{	shape* p;
	p=&r;
	p->area();
	p=&s;
	p->area();
	p=&t;
	p->area();
	p=&c;
	p->area();
	return 0;
}

