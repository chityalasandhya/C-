#include<iostream>
using namespace std;
int add(int x, int y)\
{
cout<<x+y<<endl;
return 0;
}
float add(float a, float b)
{
cout<<a+b<<endl;
return 0;
}
double add(double x,double y)
{
cout<<x+y<<endl;
return 0;
}int main(){
add(20,40);
add(13.45f,34.5f);
add(23.24,20.322);
}
