/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//SPIRAL MATRIX

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int rowstart=0;
        int rowend=matrix.size();
        int colstart=0;
        int colend=matrix[0].size();
        while(rowstart<rowend && colstart<colend){
           for(int i=colstart;i<colend;i++){
            res.push_back(matrix[rowstart][i]);
           
           }
            rowstart++;

           for(int j=rowstart;j<rowend;j++){
            res.push_back(matrix[j][colend-1]);
           
           }
            colend--;

           if(rowstart<rowend){
            for(int k=colend-1;k>=colstart;k--){
                res.push_back(matrix[rowend-1][k]);
                
            }
            rowend--;
           }
           if(colstart<colend){
            for(int m=rowend-1;m>=rowstart;m--){
                res.push_back(matrix[m][colstart]);
                
            }
            colstart++;
           }
           


        }
        return res;
    }
};