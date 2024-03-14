#include<iostream>
using namespace std;

int main(){
    int rem=0,r,temp;
    for(int i=1;i<500;i++){
        temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            r+=rem*rem*rem;
            //result+=r;
            temp=temp/10;
        }
        if(r==i)
        {
            cout<<r<<endl;
        }
        r=0;

    }
}