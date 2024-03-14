#include <iostream>

using namespace std;

int main()
{
    int *pointvar;
    float *pfloat;
    char *pchar;
    double *pdouble;

    pointvar = new int;
    *pointvar=45;

    pfloat = new float;
    *pfloat=32.3;

    pchar = new char;
    *pchar ='c';

    pdouble = new double;
    *pdouble =387.36;

    cout<<*pointvar;
    cout<<*pfloat;
    cout<<*pchar;
    cout<<*pdouble;

    delete pointvar;
    delete pfloat;
    delete pchar;
    delete pdouble;

}
