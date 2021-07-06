#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divi(int,int);
int mod(int,int);
int fact(int);
int max(int,int);
int min(int,int);
void operations();
int main(){
    operations();
    char ch;
    while(1){
        printf("\n");
        scanf("%c",&ch);
        switch(ch){
            int x,y,m,z;
            case '+':
                printf("Enter the first number to be added : \n");
                scanf("%d",&x);
                printf("Enter the first number to be added : \n");
                scanf("%d",&y);
                int addition = add(x,y);
                printf("sum of numbers is %d: \n",addition);
                break;
            case '-':
                printf("Enter the first number : \n");
                scanf("%d",&x);
                printf("Enter the second number : \n");
                scanf("%d",&y);
                int subtraction = sub(x,y);
                printf("Difference of numbers is %d: \n",subtraction);
                break;
            case '*':
                printf("Enter the first number : \n");
                scanf("%d",&x);
                printf("Enter the second number : \n");
                scanf("%d",&y);
                int multiplication = mul(x,y);
                printf("Product of numbers is %d: \n",multiplication);
                break;
            case '/':
                printf("Enter the first number : \n");
                scanf("%d",&x);
                printf("Enter the second number : \n");
                scanf("%d",&y);
                int division = divi(x,y);
                printf("Division of numbers is %d: \n",division);
                break;
            case 'm':
                printf("Enter the first number : \n");
                scanf("%d",&x);
                printf("Enter the second number : \n");
                scanf("%d",&y);
                int modulus = mod(x,y);
                printf("Mod of numbers is %d: \n",modulus);
                break;
            case '!':
                printf("Enter the a number : \n");
                scanf("%d",&x);
                int factor = fact(x);
                printf("Factorial of number is %d: \n",factor);
                break;
            case '>':
                printf("Enter the first number : \n");
                scanf("%d",&x);
                printf("Enter the second number : \n");
                scanf("%d",&y);
                int maxi = max(x,y);
                printf("Max of numbers is %d: \n",maxi);
                break;
            case '<':
                printf("Enter the first number : \n");
                scanf("%d",&x);
                printf("Enter the second number : \n");
                scanf("%d",&y);
                int mini = min(x,y);
                printf("Min of numbers is %d: \n",mini);
                break;
            case 'e':
                exit(0);
                break;
            default:
                operations();
                break;
               }
        }
}
void operations(){
    printf("\nWelcome to C calculator displaying the available option \n\n");
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter m symbol for Modulus\n");
    printf("Enter ! symbol for Factorial\n");
    printf("Enter > symbol for Max num \n");
    printf("Enter < symbol for Min num\n");
    printf("Enter e if you want to exit\n");
}
/**
 * @brief 
 * This function will add two numbers and return the answer
 * @param x
 * @param y 
 * @return int 
 */
int add(int x, int y){
    int sum = 0;
    sum = x + y;
    return sum;
}
/**
 * @brief 
 * This function will Subtract two numbers and return the answer
 * @param x
 * @param y 
 * @return int 
 */
int sub(int x, int y){
    int  c = 0;
    c = x - y;
    return c;
}
/**
 * @brief 
 * This function will Multiply two numbers and return the answer
 * @param x
 * @param y
 * @return int 
 */
int mul(int x,int y){
    int ans = 0;
    ans = x*y;
    return ans;
}
/**
 * @brief 
 * This function will divide the number and return the answer
 * @param x 
 * @param y 
 * @return int 
 */
int divi(int x,int y){
    int c = 0;
    c = x/y;
    return c;
}
/**
 * @brief 
 * This function will perform modulus operation of two numbers and return the answer
 * @param x
 * @param y 
 * @return int 
 */
int mod(int x,int y){
    int c = 0;
    c = x%y;
    return c;
}
/**
 * @brief 
 * This function will find the factorial of a number.
 * @param x
 * @return int 
 */
int fact(int x){
    int i,fact=1;
    for(i = 1;i <= x;i++){
        fact = fact*i;
    }
    return fact;
}
/**
 * @brief 
 * This function will find the maximum of the two numbers and return the answer
 * @param x
 * @param y
 * @return int 
 */
int max(int x,int y){
    int c;
    if(x > y){
        c = x;
    }else{
        c = y;
    }
    return c;
}
/**
 * @brief 
 * This function will find the minimum of the  two numbers and return the answer
 * @param x 
 * @param y 
 * @return int 
 */
int min(int x,int y){
     int c;
    if(x > y){
        c = y;
    }else{
        c = x;
    }
    return c;
}
