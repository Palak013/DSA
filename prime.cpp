/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
     int n;
     int flag=0;
     cin>>n;//not checking for 1 and n as iff it divides it will be a prime number
     for(int i=2;i<n;i++){
         if(n%2==0){
            flag=1;
         }
         
     }
     if(flag==1){
         cout<<"not a prime";
     }
     else{
         cout<<"a prime";
     }

    return 0;
}