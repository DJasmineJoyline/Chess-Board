#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,i,j,b1,b2,q1,q2;
    //char a[100][100];
    scanf("%d %d %d %d %d",&n,&b1,&b2,&q1,&q2);
   // for(i=0;i<n;i++)
    //for(j=0;j<n;j++)
    //scanf(" %c",&a[i][j]);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
        if((i==b1)&& (j==b2))
        printf("B");
        else if((i==q1)&&(j==q2))
        printf("Q");
        else if(i-b1==j-b2)
        {
            if(q1==i)
            printf("%%");
           else if(q2==j)
            printf("%%");
           else if(abs(q1-i)==abs(q2-j))
            printf("%%");
            else
            
            printf("*");
        }
        else if(-i+b1==j-b2)
        {
            if(q1==i)
            printf("%%");
           else if(q2==j)
            printf("%%");
           else if(abs(q1-i)==abs(q2-j))
            printf("%%");
            else
            printf("*");
         }
        else if(q1==i)
        printf("$");
        else if(q2==j)
        printf("$");
        else if(abs(q1-i)==abs(q2-j))
        printf("$");
        else
        printf(".");
    }
    printf("\n");
    }
    return 0;
}
