
#include <stdio.h>
void main ()
 {
    int i,a[5];
    printf("enter the array elements:\n");
      for(i=0;i<=5;i++)
      {
        scanf("%d",&a[i]);
      }
        for(i=0;i<=5;i++)
       {
        printf("array elements at index %d is : %d \n",i,a[i]);
       }    
         //to print it reverse
        for(i=5;i>=0;i--)
        {
            printf("array elements at index %d is %d \n",i,a[i]);
        }


 return 0;


 }