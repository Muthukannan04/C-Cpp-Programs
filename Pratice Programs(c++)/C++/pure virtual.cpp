#include<iostream>
using namespace std;

class shape{
    protected:
        float b,h;      
    public:
        void getsquare();
        virtual void calculatearea()=0;

};
class triangle:public shape{
    public:
        float b,h,tot;
        cout<<"Enter the triangle of breadth:";
        cin>>b;
        cout<<"Enter the height of triangle:";
        cin>>h;
        tot=b*h;
};

int main(){
    triangle tri;

}