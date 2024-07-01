// 

// next

  #include<stdio.h>
  int main (){
    int i,j,row;
  printf("enter the number of rows\n");
  scanf("%d",&row);
  for(i=row;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
  }
    return 0;
  }