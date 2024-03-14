#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter the no.of.rows:";
    cin>>rows;
    cout<<endl;
    for(int i=0;i<rows;i++){
        int val=1;
        for(int j=1;j<(rows-i);j++)
        {
            cout<<"  ";

        }
    }
}