#include<iostream>
#include<exception>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a & b values:"<<endl;
	cin>>a>>b;
	try{ 
		try {
		if(b==0)
			throw c;
		else	{
			c=a/b;
			cout<<"Result is: "<<c<<endl;
		}
		}
	catch(int b) {
		cout<<" Exception caught!"<<endl;
		throw;
		}
	}		
	catch(int)
	{
		cout<<"Divide by zero Exception caught![as b = "<<b<<"]"<<endl;
	}
return 0;
}
