#include<conio.h>
#include<stdio.h>
#include<math.h>>
int main()
{
   long long int i,num,j,n=13195;

   if(n%2==0)
   {
       n=n/2;
       num=2;
   }
   for(i=3;i<=sqrt(n);i=i+2)
    {
        if(n%i==0)
        {
            n=n/i;
            num=i;
            printf("%ld %ld", i,num);
        }

    }
    printf("%ld",num);

}
