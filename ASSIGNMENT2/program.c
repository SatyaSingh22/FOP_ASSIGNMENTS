#include <stdio.h>
int main(){
 int a,b,choice;
 printf("Enter the value of a:");
 scanf("%d",&a);
 printf("Enter the value of b:");
 scanf("%d",&b);
 
 printf("Enter the assigned number of operation you want to perform (1.Addition, 2.Subtraction, 3.Multiplication, 4.Division):");
 scanf("%d",&choice);
 switch(choice){
  case 1:
    printf("Sum:%d+%d=%d.\n",a,b,a+b);
    break;
  case 2:
    printf("Subtraction:%d-%d=%d.\n",a,b,a-b);
    break;
  case 3:
    printf("Multiplication:%d*%d=%d.\n",a,b,a*b);
    break;
  case 4:
    if(b!=0){
      printf("Sum:%d/%d=%d.\n",a,b,a/b);
      break;
    }
    else{
      printf("Division by zero not allowed.\n");
    }
  default:
    printf("Display invalid choice.\n");
 }
 return 0;
}
