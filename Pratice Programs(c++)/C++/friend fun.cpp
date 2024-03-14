#include<iostream>
using namespace std;

class Distance{
    private:
        int meter;
        // friend function
      //  friend int addfive(Distance);
      int addfive(Distance);


    public:
        Distance():meter(0){} 
    int getno(){
        return meter;
    }  
    void setno(int m){
        meter =m;
    } 
};
// /int addfive(Distance d){
//     d.meter +=5;
//     return d.meter;
// }
int main(){
    Distance D;
    D.setno(5);
    cout<<"Distance:"<<D.getno();
    return 0;
}