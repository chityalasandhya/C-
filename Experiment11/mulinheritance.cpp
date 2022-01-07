#include<iostream>
using namespace std;
class A1 {
	public:
	int a;
	a1()
		a=5;
		void display()
	{
		cout<<"output of a1 class:"<<a<<endl;
		} 
		};
class A2: public a1[
	public:
		int b;
		a2()
			b=10;
			void display2()
			{
				cout<<"output of a2 class:"<<b<<endl;
				}
				};
class a3: public a2 {
	public:
	int c;
	a3()
		c=15;
		void display()
		{
			cout<<"output of a3 class:"<<c<<endl;
			}
			};
int main()
{
a3.A;
A.display1();
A.display2();
A.display3();
return 0;
}
		
