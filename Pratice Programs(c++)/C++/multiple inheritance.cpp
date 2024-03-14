#include<iostream>

using namespace std;

class dosa{
    public:
            dosa()
       // void fun()
        {
            cout<<"This is dosa \n";
        }
};

class idly{
    public:
    idly()
    // void fun1()
    {
       cout<< "This is idly";
    }
};

class food:public dosa,public idly{};

int main()
{
    food fd;
    // fd.fun();
    // fd.idly();
}
