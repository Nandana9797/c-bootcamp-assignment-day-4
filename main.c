/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
  int n, i, flag=0;
  printf("Enter a positive integer: ");
  scanf("%d",&n);
  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      printf("%d is a prime number.",n);
  else
      printf("%d is not a prime number.",n);
  return 0;
}