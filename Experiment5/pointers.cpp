#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	string ename;
	float salary;
	int eid;
	public:
		void read()
		{
			cout<<"enter the details of the employee:"<<endl;
			cin>>ename;
			cin>>salary;
			cin>>eid;
		}
		void display()
		{
		cout<<"employee name:"<<ename<<endl;
		cout<<"salary"<<salary<<endl;
		cout<<"employee id:"<<eid<<endl;
		}
};
int main()
{
	employee e1;
	employee *ptr;
	ptr=&e1;
	ptr->read();
	ptr->display();
	return 0;
}

