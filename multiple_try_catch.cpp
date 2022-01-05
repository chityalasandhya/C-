#include<iostream>
#include<exception>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a & b values:"<<endl;
	cin>>a>>b;
	try{ 
		if(b==0)
			throw c;
		else	{
			c=a/b;
			cout<<"Result is: "<<c<<endl;
		}
	}
	catch(float b) {
		cout<<"Divide by zero Exception caught! [b= "<<b<<"]"<<endl;
	}	
	catch(char b) {
		cout<<" Exception caught!"<<endl;
	}		
	catch(...)
	{
		cout<<"Divide by zero Exception caught! "<<endl;
	}
return 0;
}
	
		
