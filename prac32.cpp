#include<iostream>
using namespace std;

class game{	int goals, goalA, goalB;
		
		public:	game();
			game(int,int);
			void result(int);
			~game(){	cout<<"Game Over!!!"<<endl;
			       }
	  };

game::game()
{	goals=goalA=goalB=0;
}

game::game(int a, int b)
{	goals=a+b;
	goalA=a;
	goalB=b;
}

void game::result(int c)
{	if(c==0)
		cout<<"At Start,"<<endl;
	else if(c==1)
	{	cout<<"At Half Time, "<<endl;
		if(goalA>goalB)
			cout<<"Team A is leading..."<<endl;
		else if(goalA<goalB)
			cout<<"Team B is leading..."<<endl;
		else
			cout<<"Equal..."<<endl;
	}
	else if(c==2)
	{	cout<<"At Full Time, "<<endl;
		if(goalA>goalB)
                        cout<<"Team A Wins!!!"<<endl;
                else if(goalA<goalB)
                        cout<<"Team B Wins!!!"<<endl;
                else
                        cout<<"Draw!!!"<<endl;
	}
	cout<<"Total = "<<goals<<endl;
        cout<<"Team A = "<<goalA<<endl;
        cout<<"Team B = "<<goalB<<endl; 
}

int main()
{	int d, e;
	game obj1;
	obj1.result(0);
	cout<<"Enter goals for Team A and Team B"<<endl;
	cin>>d>>e;
	game obj2(d,e);
	obj2.result(1);
	cout<<"Enter goals for Team A and Team B"<<endl;
	cin>>d>>e;
	game obj3(d,e);
	obj3.result(2);
	return 0;
}

