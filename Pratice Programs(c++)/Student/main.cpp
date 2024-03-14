#include <iostream>

using namespace std;

class student{
private:
    int age;
    string name;
public:
    student():age(30){}
    void getage(){
    cout<<"Age:"<<age<<endl;
    student():name("MALESH"){}
    void getname(){
        cout<<"Name:"<<name<<endl;
    }
    }
};

int main()
{
    student *ptr=new student();
    ptr->getage();
    ptr->getname();
    delete ptr;
    return 0;

}
