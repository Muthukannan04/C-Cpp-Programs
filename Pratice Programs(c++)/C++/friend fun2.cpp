#include<iostream>
class Distance{
    int meter;
    int feet;
    friend int addfive(Distance);

    public:
        Distance():meter(0),feet(1){}
};
int addfive(Distance d){
    d.meter +=5;
    cout<<"distance:"
    return d.meter;
    return d.feet;
}
int main(){
    Distance D;
    cout<<"Meter Distance:"<<d.meter;
    cout<<"Feet Distance:"<<d.feet;
}
