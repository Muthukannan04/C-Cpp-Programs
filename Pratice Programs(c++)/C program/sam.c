#include<stdio.h>
#include<stdlib.h>
struct threenum
{
    int n1,n2,n3;
};
int main()
{
    int n;
    struct threenum num;
    FILE *fptr;
    if((fptr= fopen("c:\\samp.bin","rb"))=NULL)
        {
            printf("no");
            exit(1);
        }
    for(n=1;n<5;++n)
    {
        fread(&num,sizeof(struct threenum),1,fptr);
        printf("n1:%d/+n2:%d/tns:%d/n",num.n1,num.n2,num.n3);
    }
    fclose(fptr);
    return 0;
}