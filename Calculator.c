#include <stdio.h>
void main()
{
    char c;
    int a,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
printf("Enter the operator you want(+, -, *, /) :");
scanf(" %c",&c);
if(c=='+'){
    printf("Addition is %d",a+b);
}
else if(c=='-'){
    printf("Subtraction is %d",a-b);
}
else if(c=='*'){
    printf("Multiplication is %d",a*b);
}
else if(c=='/')
{
    printf("Division is %d",a/b);
}
else{
    printf("This operator not in use");
}

}
