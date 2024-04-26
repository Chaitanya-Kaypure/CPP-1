#include<iostream>
using namespace std;
class Date
{
   private:
         int day;
         int month;
         int year;

   public:
         Date()
         { 
          cout<<"Enter the day";
          cin>>day;
          cout<<"Enter the month";
          cin>>month;
          cout<<"Enter the year";
          cin>>year;
         }

   void display()
        {
         cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
        
 Date(int d,int m,int y)
        {
            day=d;
            month=m;
            year=y;

        }           
 };

int main()
{
Date D;
D.display();
Date D1(24,6,2004);
D1.display();
return 0;
}

