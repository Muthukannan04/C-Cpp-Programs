#include<iostream>
#include <string>


using namespace std;

struct car{
    public:
        string carmodel[5] = {"Honda","Toyota","Suzuki","kia"};
        int carid;
        int carfair;    
};
void carrent()
{
    cout<<"Below the Cars are Available";
    for (int i = 0 ; i < 5 ; i++)
    {
        
    }
    
}
void carreturn() 
{

}
int main(){
    int a,b;
    cout<<"1.Admin"<<endl;
    cout<<"2.customer"<<endl;
    cin>>a;
    if(a=2)
    {
        cout<<"1.Rent the car,2.Return the car : ";
        cin>>b;
        switch(b)
        {
            case 1:
                carrent();
                break;
            case 2:
                carreturn();

        }
    }
}