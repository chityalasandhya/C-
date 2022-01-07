#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	
	string sname,branch;
	int rollno,marks;
};
int main()
{
	student s1;
	cout<<"enter student name:"<<endl;
	cin>>s1.sname;
	cout<<"branch"<<endl;
	cin>>s1.branch;
	cout<<"rollno"<<endl;
	cin>>s1.rollno;
	cout<<"marks"<<endl;
	cin>>s1.marks;
	cout<<"Name:"<<s1.sname<<endl;
	cout<<"branch:"<<s1.branch<<endl;
	cout<<"Roll no:"<<s1.rollno<<endl;
	cout<<"marks:"<<s1.marks<<endl;
	return 0;
}
	
	

