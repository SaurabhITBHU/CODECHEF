#include<stdio.h>

static const int tp[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912};

static int inline maxpow(int a)
{
     int i;  
     for(i=0;a>=tp[i];i++);
     return(tp[i-1]);
}          
int main()
{
    int test,num;   
    scanf("%d",&test);
    while(test--)
    {
         scanf("%d",&num);
         printf("%d\n",maxpow(num));
    }
return(0);
}     
         
