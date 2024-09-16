/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>


int add(int x,int y){
    int sum=0;
    sum=x+y;
    return sum;
}


int main()
{
    int a,b;
    
    std::cout<<"Hello World"<<std::endl;
    std::cin >> a;
    std::cin >>b;
    std::cout<<add(a,b);
    
}