#include <iostream>
using namespace std;
class A     {
    int x;
    public:
    A(){}
    A(int l)
    {
        x=l;
    }
    void operator +(A);
    void display();
};
void A :: operator+(A a)
{
    int m=x+a.x;
    cout<<"Sum is "<<m<<endl;
}
int main()
{
    A a1(20);
    A a2(13);
    a1+a2;
    return 0;
}
