/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
   int arr[n];
   int re=-1;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cin>>k;
   priority_queue<int,vector<int>,greater<int>> mp;
   for(int num:arr){
       mp.push(num);
   }
   for(int i=0;i<k;i++){
       re=mp.top();
       mp.pop();
   }
   cout<<re;
   
    return 0;
}