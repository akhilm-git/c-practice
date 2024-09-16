/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//pass by reference

#include <iostream>
using namespace std;

void printArray(int Arr[],int s){
    for(int i=0;i<s;i++){
        cout<<Arr[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
    cin>>A[i];
    }
    printArray(A,n);

}