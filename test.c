#include<stdio.h>
int main()
{
       int n1, n2, n3, sum;
       printf("Enter the first side of traingle : \n");
       scanf("%d", &n1);
       printf("Enter the second side of traingle : \n");
       scanf("%d", &n2);
       printf("Enter the third side of traingle : \n");
       scanf("%d", &n3);
       sum = n1 + n2 + n3;
       if(sum == 180)
       {
              printf("Triangle is valid \n");
       }
       else
       {
              printf("Triangle is not valid ");
       }
       return 0;
}
