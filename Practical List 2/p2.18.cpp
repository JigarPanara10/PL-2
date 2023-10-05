#include<iostream>
using namespace std;
int area(float r,float PI=3.14);
int main()
{
	float r;
	cout<<"enter the value of r::";
	cin>>r;
	cout<<"area of the circle is ::"<<area(r)<<endl;
	return 0;
}
 int area(float r,float PI)
 {
 	return(PI*r*r);
 }
