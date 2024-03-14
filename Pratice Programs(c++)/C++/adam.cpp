#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,rem,rev1,rev2,temp,rem1,sq;
    cout<<"enter the no:";
    cin>>n;

    temp=n*n;
    while(temp!=0){
        rem=temp%10;
        rev1=rev1*10+rem;
        temp/=10;
    }
    sq = sqrt(rev1);

    while(sq!=0)
    {
        rem1=sq%10;
        rev2=rev2*10+rem1;
        sq/=10;

    }
    if(n==rev2){
        cout<<"it's an adam no";
    }
    else{
        cout<<"it's an not adam no";
    }

}