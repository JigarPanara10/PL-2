#include<iostream>
using namespace std;
int x=5;
int&test();
int main()
{
	test()=15;
	cout<<test();
	return 0;
}
int &test()
{
	return x;
}
