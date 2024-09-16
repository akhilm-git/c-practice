/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//structure as a parameter using call by address
#include <iostream>
using namespace std;


struct Rectangle{
    int length;
    int breadth;
};

//initialization
void initialize (struct Rectangle *r,int a,int b){
    r->length=a;
    r->breadth=b;
}

//area
int area(struct Rectangle r){
    return r.length*r.breadth;
}

//changing Length
void changeLength(struct Rectangle *r, int newLen){
    r->length=newLen;
    cout<<r->length<<endl;
}

int main(){
    struct Rectangle r;
    
    initialize(&r,10,5);
    std::cout << r.length <<" "<<r.breadth<< std::endl;
    
    cout<<area(r)<<endl;
    
    changeLength(&r,15);
    cout<<r.length<<endl;
}