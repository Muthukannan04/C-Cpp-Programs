#include<iostream>
using namespace std;

class father{
    private:
      int n;
    public:
        father():n(5){
            cout<<"This is father class"<<endl;
        }
            void fun(int a){
                n=a;
                cout<<"This is value of n:"<<n;
            }   
};

class mother :private father{
    private:
        int t;
    public:
        mother(){
            cout<<"This is mother class";
        }
         void fun1(int b){
                t=b;
                cout<<"This is value of n:"<<t;
            }   
};
int main(){
    mother m;
    m.fun1(5);
    return 0;

}