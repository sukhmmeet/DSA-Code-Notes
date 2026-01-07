#include<bits/stdc++.h>
#include<utility>

using namespace std;

int maxRowSum(vector<vector<int>> matrix){
    int maxSum = INT_MIN;
    for(int i = 0; i < matrix.size(); i++){
        int sum = 0;
        for(int j = 0; j < matrix[i].size(); j++){
            sum += matrix[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
        }
    }
    return maxSum;
}

int maxColumnSum(vector<vector<int>> matrix){
    int maxSum = INT_MIN;
    for(int i = 0; i < matrix.size(); i++){
        int sum = 0;
        for(int j = 0; j < matrix[i].size(); j++){
            sum += matrix[j][i];
        }
        if(sum > maxSum){
            maxSum = sum;
        }
    }
    return maxSum;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    cout << maxRowSum(matrix) << endl;
    cout << maxColumnSum(matrix) << endl;
}