#include<stdio.h>

int main()
{    
     int test,num,ans[200],quotient,ans_filled,i,j,total;
     
     scanf("%d",&test);
     while(test--)
     {
          ans_filled = 0; ans[0] = 1;        
          scanf("%d",&num);
          for(i=2;i<=num;i++)
          {
               quotient = 0;              
               for(j=0;j<=ans_filled;j++)
               {
                    total = ans[j]*i + quotient;
                    ans[j] = total%10;
                    quotient = total/10; 
               }
               while(quotient>0)
               {
                    ans[j++] = quotient%10;
                    quotient/=10;
               }
               ans_filled = --j;
          }
          for(i=ans_filled;i>=0;i--)
          {
                printf("%d",ans[i]);
          }
          printf("\n");
     } 
return(0);         
}   
