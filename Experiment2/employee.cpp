#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	int eid;
	float salary;
	string employee_name;
	public:
		void read()
		{
			cout<<"enter the details of the employee:";
			cin>>eid;
			cin>>salary;
			cin>>employee_name;
		}
		void write()
		{
		cout<<"employee ID: "<<eid<<endl;
		cout<<"salary:"<<salary<<endl;
		cout<<"employee_name:"<<employee_name;
		}
};
int main()
{
	employee e1;
	e1.read();
	e1.write();
	return 0;
}
			
	

 
