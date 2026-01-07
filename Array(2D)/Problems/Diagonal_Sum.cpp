#include<bits/stdc++.h>
#include<utility>

using namespace std;

int diagonalSum(vector<vector<int>> matrix){
    int PD = 0;
    int SD = 0;
    for(int i = 0; i<matrix.size(); i++){
        PD += matrix[i][i];
        SD += matrix[i][matrix.size() - i -1];
    }
    return PD > SD? PD : SD;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    cout << diagonalSum(matrix) << endl;
}