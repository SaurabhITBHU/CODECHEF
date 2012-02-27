#include<stdio.h>
#include<math.h>

int main()
{
    int test,num,a,pos;   
    scanf("%d",&test);
    while(test--)
    {
         scanf("%d",&num);
         a = (int)(log(num)/log(2));
         pos = pow(2,a);
         printf("%d\n",pos);
    }
return(0);
}
