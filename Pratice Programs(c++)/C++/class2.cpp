#include<iostream>
using namespace std;

class Animal{
    protected:
        int a,b;
    public:
        Animal(int c,int d)
        {
            a=c;
            b=d;
            cout<<"THE VALUE OF A:"<<a<<"THE VALUE OF B:"<<b<<endl;
        }
};

int main(){
    int f,g;
    cout<<"Enter the value of A and B:";
    cin>>f>>g;
    Animal an(f,g);
    return 0;

}