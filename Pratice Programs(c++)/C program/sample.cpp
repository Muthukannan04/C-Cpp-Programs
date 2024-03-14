#include<iostream>

using namespace std;
//a=0;
class Account
{
    private:
    int acc_no;
    public:
    string name;
    Account()
    {
        cout<<"Enter the acc no:";
        cin>>name;
        cout<<"Enter the name:";
        cin>>acc_no;
        display();
        //a++;
    }
    int display()
    {
        cout<<"Acc no:"<<acc_no<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
int main()
{
    Account a,b;
    //cout<<"No.of .obj:"<<a;
    return 0;
}