/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguess=1;
    srand(time(0));
    number = rand()%100 + 1;
    printf("the number is %d\n",number);
do{
    printf("Enter the number\n");
    scanf("%d",&guess);
    if(number>guess){
        printf("Lower number please\n");
    }
    else if(number<guess){
        printf("Greater number please\n");
    }
    else{
        printf("you take %d steps\n",nguess);
    }
    nguess++;
}while(number!=guess);
    return 0;
}
