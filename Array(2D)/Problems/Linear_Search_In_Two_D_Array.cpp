#include<bits/stdc++.h>
#include<utility>

using namespace std;

pair<int,int> search(vector<vector<int>> matrix, int target){
    pair<int,int> pair;
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            if(matrix[i][j] == target){
                pair = {i,j};
            }
        }
    }
    pair = {-1,-1};
    return pair;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 81;
    pair<int,int> pair = search(matrix , target);
    cout << pair.first << " " << pair.second << endl;
}