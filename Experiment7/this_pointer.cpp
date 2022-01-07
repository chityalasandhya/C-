#include<iostream>
#include<string.h>
using namespace std;
class employee {
	public: 
		int id;
		string name;
		float salary;
		employee(int id,string name,float salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display()
		{
			cout<<id<<" "<<name<<" "<<salary<<endl;
		}
};
int main()
{
	employee e1=employee(1204,"sandhya",50000);
	employee e2=employee(1206,"shivani",30000);
	e1.display();
	e2.display();
	return 0;
}	

