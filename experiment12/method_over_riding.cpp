#include<iostream>
using namespace std;
class A{
	public:
	void display(){
	cout<<"base class"<<endl;
	}
};
class B:public A{
	public:
	void display(){
	cout<<"derived class"<<endl;
	}
};
int main(){
B obj=B();
obj.display();
return 0;
}	
