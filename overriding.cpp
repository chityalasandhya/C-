#include<iostream>
using namespace std;
class A {
	public:
		int a=16,b=32,sum;
		void display()
		{
			sum=a+b;
			cout<<"Sum of class A is "<<sum<<endl;
		}
};
class B : public A {
	public:
		int c=12,d=34,sum;
		void display()
		{
			sum=c+d;
			cout<<"Sum of class B is "<<sum<<endl;
		}
};
int main()
{
	B obj;
	obj.display();
	return 0;
}

