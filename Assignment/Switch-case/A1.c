#include<stdio.h>
int main(){
int num;
printf("Enter the num->");
scanf("%d",&num);
switch(num){
    case 1:
    printf("One");
    break;

    case 2:
    printf("Two");
    break;

    case 3:
    printf("Three");
    break;

    default:
    printf("invalid");

}

    return 0;
}