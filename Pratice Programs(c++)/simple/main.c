#include <stdio.h>
#include <math.h>

int main()
{
    int num,temp,rev1=0,rev2=0,rem,sq;
    printf("Enter a Num:");
    scanf("%d",num);

    temp=num*num;

    while(temp!=0){
        rem=temp%10;
        rev1=rev1*10+rem;
        temp/=10;
    }
    sq=sqrt(rev1);
    while(sq=0){
        rem=sq%10;
        rev2=rev2*10+rem;
    }
    printf("%d",sq);
    printf("%d",rev2);
}
