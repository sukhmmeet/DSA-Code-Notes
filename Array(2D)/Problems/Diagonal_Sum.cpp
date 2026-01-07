#include<bits/stdc++.h>
#include<utility>

using namespace std;

int diagonalSum(const vector<vector<int>>& matrix){
    int n = matrix.size();
    int PD = 0, SD = 0;

    for(int i = 0; i < n; i++){
        PD += matrix[i][i];
        SD += matrix[i][n - i - 1];
    }

    return max(PD, SD);
}


int main(){
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout << diagonalSum(matrix) << endl;
}