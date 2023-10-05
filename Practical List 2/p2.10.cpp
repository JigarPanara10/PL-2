#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
	int a=10;int b=20;
	cout<<"before swapping the value is "<<a<<" & "<<b<<endl;
	swap(a,b);
	cout<<"after swapping the value is "<<a<<"  & "<<b<<endl;
	return 0;
}
void swap(int &p,int &q)
{
	int temp=p;
	p=q;
	q=temp;
}

