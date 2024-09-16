/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//structure as a parameter using call by address
#include <iostream>
using namespace std;

struct Rectangle {
    int l;
    int b;
};

void fun(struct Rectangle *p){
    p->l=20;
    cout<<p->l<<endl;
}


int main(){
    struct Rectangle r={10,5};
    fun(&r);
    cout<<r.l<<endl;
}