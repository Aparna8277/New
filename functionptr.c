//A C program to illustrate the function pointers
#include<stdio.h>
#include<stdlib.h>
int func_add(int a,int b)
{
  return a+b;
 }
 int func_mul(int a,int b)
 {
   return a*b;
  }
int func_sub(int a,int b)
{
 return a-b;
}
int main()
{
 int p,q,opt;
 printf("Enter the numbers:\n");
 scanf("%d%d",&p,&q);
 int (*fun_ptr[])(int,int)={func_add,func_mul,func_sub};
 int (*fptr)()=&main;
 fptr();
 

 
 for(;;)   //User can choose the operation or can exit the program
 {
  printf("Enter 0 for addition, 1 for multiplication and 2 for subtraction or 3 to exit:\n");
  scanf("%d",&opt);
  switch(opt)
  {
      case 0:
               printf("The sum of two numbers is:%d\n", (*fun_ptr[opt])(p,q));
               break;
      case 1:
               printf("The product of two numbers is:%d\n",(*fun_ptr[opt])(p,q));
               break;
      case 2:
               printf("The difference of two numbers is:%d\n",(*fun_ptr[opt])(p,q));
               break;
      case 3:
               printf("Thankyou!\n");
               exit(0);
      default:
               printf("Please enter valid input!\n");
               break;
    }
  }
   return 0;
}
