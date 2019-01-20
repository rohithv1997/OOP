#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{	int i, j, n=0, flag=0;
	char str[100]="\0";
	cout<<"Enter string"<<endl;
	gets(str);
	while((char)(str[n])!='\0')
		n++;
	for(i=0,j=n-1;i<n/2;i++,j--)
		if((char)(str[i])!=(char)(str[j]))	
			flag=1;
	if(flag)
		cout<<"Not a Palindrome"<<endl;
	else
		cout<<"Palindrome"<<endl;
	return 0;
}

