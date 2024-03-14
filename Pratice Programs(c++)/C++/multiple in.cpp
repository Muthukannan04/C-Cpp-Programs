#include<iostream>
using namespace std;
class father{
    public:
        father(){
           cout<<"This is father class \n";
        }
};

class mother{
    public:
        mother(){
            cout<<"This mother class \n";
        }
};

class child:public mother,father{
    public:
        child(){
            cout<<"This child class";
        }
};
int main(){
    //father f;
    //mother m;
    child c;
}





