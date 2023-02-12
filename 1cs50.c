#include <stdio.h>
#include <cs50.h>
float discount(float price,int precent){
     return price *(100-precent)/100;
     
}
int main(void){
    float regular = get_float("regular price: ");
    int precent =get_int("precent of: ");
    float sale = discount(regular,precent);
    printf("sale price= %.2f \n", sale);
}