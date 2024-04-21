
#include <iostream>
#include<string>
using namespace std;

class Person{
    public:
        string name;
        int age;
        char gender;
        Person(int aj){
            age = aj;
        }
        Person(){
            age=0;
        }
};
class Student : public Person{
    public:
        int rollcall;
        float percentage;
        Student(float per){
            percentage = per;
        }
};

class Teacher : Person{
    public:
        float salary;
        int f_id;
        Teacher(int id){
            f_id = id;
        }
};
int main() {
    Person p(22), p1;
    Student s(10.20);
    Teacher t(21);
    cout<<p.age<<endl;
    cout<<p1.age<<endl;
    cout<<s.age<<endl;
    cout<<s.percentage<<endl;
    //cout<<t.age<<endl;
    cout<<t.f_id<<endl;
    return 0;
}