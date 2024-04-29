#include<iostream>
using namespace std;

class Box
{
private:
   int length;
public:
   box():length(0) {}
   friend int printLength(Box);
};

int printLength(Box)
{
b.length+=10;
return b.length;
}

int main()
{
Box b;
cout<<"Length of box:"<<printLength(b)<<endl;
return 0;

}
