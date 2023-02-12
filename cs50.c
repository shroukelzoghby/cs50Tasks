#include <stdio.h>
#include <cs50.h>

void meow (int n){
	for(int i=0; i<n;i++){
		printf("meow \n");
	}
}

int main(void) {
//prog1
	int x=4;
	int y=6;
	printf("%d \n ",x+y);
	printf("%d \n ",x-y);
	printf("%d \n ",x*y);
	printf("%d \n ",x/y);
	printf("%d \n ",++x);
//prog2
    int i=0;
while(i<3){
	printf("hello \n");
	i++;
}
for(int i=0;i<3;i++){
	printf("hello \n");
}
//prog3 
int num1= get_int("num1: ");
int num2= get_int("num2: ");
int result = num1 + num2;
printf("%i\n ",result );
//prog3
int z =get_int ("z: ");
	int f =get_int ("f: ");
	if(z<f)
	{
		printf("z is less than f");
	}
	else if (z>f)
	{
		printf("f is less than z");
	}
	else
	{
		printf("z = f");
	}
//prog4 
    meow(10);

}
