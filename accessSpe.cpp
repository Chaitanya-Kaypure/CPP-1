#include<iostream>

using namespace std;
class A
{
 int a= 1;
 int b= 2;
public: int c=3;
  	int d=4;

void sum()
{
 cout<<d+c+a+b<<endl;
 }

};

void add(int x,int y)
{
 cout<<x+y<<endl;
}

int main()
{
 A aob;
 aob.sum();
 add(aob.c,aob.d);
 //add(aob.a,aob.b);

return 0;
}
