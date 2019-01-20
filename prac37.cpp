#include<iostream>
using namespace std;

class account{	protected: int account_balance;
		
		public:	account()
			{	account_balance=0;
			}
			void credit(int a)
			{	account_balance+=a;
			}
			void debit(int a)
			{	account_balance-=a;
			}
			int getbalance()
			{	return account_balance;
			}
};

class savingsaccount: public account
{	int interest_rate;
	
	public: savingsaccount()
		{	account_balance=0;
			interest_rate=3;
		}
		savingsaccount(int b)
		{	account_balance+=b;
			interest_rate=4;
		}
		int calculate_interest(int n)
		{	return(account_balance*n*interest_rate/100);
		}
};

int main()
{	savingsaccount a(1000);
	a.debit(100);
	a.credit(200);
	cout<<"Interest Rate for 1 year = Rs.  "<<a.calculate_interest(1)<<endl;
	return 0;
}

