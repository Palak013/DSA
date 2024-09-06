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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
     unordered_map<int,int>mp;
     for(int i: arr){
         mp[i]++;
     }
     int max_freq=0;
     int max_ele=-1;
     for(const auto&pair:mp){
         if(pair.second>max_freq){
             max_freq=pair.second;
             max_ele=pair.first;
         }
     }
     cout<<max_ele;
    
    return 0;
}