/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//pass by value, actual parameters remain same and no use if method's return type is void

#include <iostream>


void swap(int *x,int *y){
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}


int main()
{
    int a,b;
    
    std::cout<<"Hello World"<<std::endl;
    std::cin >> a;
    std::cin >>b;
    swap(&a,&b);
    std::cout<<a <<" "<<b;
    
}