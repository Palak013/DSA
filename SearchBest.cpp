/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//SEARCHING IN LOG MN

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       if(matrix.empty() || matrix[0].empty()){
        return false;
       }
        int m=matrix.size();
        int n=matrix[0].size();
        int left =0;
        int right=m*n-1;
        while(left<=right){
            int mid=(left+right)/2;
            int mid_value=matrix[mid/n][mid%n];
            if(mid_value==target){
                return true;
            }
            else if(mid_value<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }
};