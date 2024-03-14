#include<iostream>
using namespace std;
class Animal{
    private:
    int a,b;
    public:
        void show_animal(int c,int d){
            a=c;
            b=d;
            cout<<"This is animal class" "A:"<<a<< "B:"<<b<<endl;
        }

};
class Dog{
    private:
        int e,f;
    public: 
        void show_dog(int g,int h){
            e=g;
            f=h;
            cout<<"This is dog class" "E:"<<e<< "F:"<<h<<endl;
        }
};
int main(){
    Animal a;
    a.show_animal(2,4);
    Dog dg;
    dg.show_dog(5,3);
    return 0;
}



