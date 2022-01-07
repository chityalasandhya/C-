#include<iostream>
using namespace std;
class test {
	public :
		int y,z;
	test()	{
		y=9;
		z=32;
	}
	~test(){}
};
int main()
{
	test a;
	cout<<"Sum = "<<a.y+a.z<<endl;
	return 0;
}

