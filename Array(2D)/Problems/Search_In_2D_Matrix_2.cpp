#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row = matrix.size() - 1;
    int cols = matrix[0].size() - 1;
    int r = 0, c = cols;
    while(r <= row && c >= 0){
        if(matrix[r][c] == target){
            return true;
        }else if(target < matrix[r][c]){
            c--;
        }else{
            r++;
        }
    }
    return false;
}