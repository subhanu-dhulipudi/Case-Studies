#include<stdio.h>
void main()
{
  int n1,n2;
  char n3,op;
  printf("\nenter 2 numbers:");
  scanf("%d%d",&n1,&n2);
  printf("\nenter the operator(+,-,%%,*,/):");
  scanf("%c%c",&n3,&op);
  switch(op)
  {
  case '+':
  printf("\n%d+%d=%d",n1,n2,n1+n2);
  break;
  case '-':
  printf("\n%d-%d=%d",n1,n2,n1-n2);
  break;
  case '*':
  printf("\n%d*%d=%d",n1,n2,n1*n2);
  break;
  case '/':
  printf("\n%d/%d=%f",n1,n2,(float)n1/n2);
  break;
  case '%':
  printf("\n%d%%%d=%d",n1,n2,n1%n2);
  break;
  default:
  printf("\noperator not identified");
  break;
  }
 } 