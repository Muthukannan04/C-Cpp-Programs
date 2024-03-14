/// Multi level inheritance
#include<iostream>
using namespace std;


class vechile{
    public:
        vechile(){
            cout<<"This is vechile \n";
        }
};

class bike:public vechile
 {
    public:
        bike(){
            cout<<"This is bike \n";
        }
};

class bike2:public bike{
    public:
        bike2(){
            cout<<"This is bike2";
        }
};



int main(){
    vechile v;
    bike b;
    bike2 b2;

}