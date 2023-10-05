#include<iostream>
using namespace std;
int add(int &,int &);
int main()
{
	int a,b;
	cout<<"enter the value a::";
	cin>>a;
	cout<<"enter the value b::";
	cin>>b;
	cout<<"sum of a and b is ::"<<a+b<<endl;
	return 0;
}
int add(int &p,int &q)
{
	return p+q;
}
