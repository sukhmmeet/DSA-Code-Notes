#include<bits/stdc++.h>

using namespace std;

void solution(vector<vector<int>> mat){
    int ans = 0;
    for(int i = 0; i < mat[0].size(); i++){
        for(int j = 0; j < mat.size(); j++){
            ans+=mat[j][i];
        }
        cout << ans << endl;
        ans = 0;
    }

}


int main()
{
    vector<vector<int>> mat = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10},
        { 11, 12, 13, 14, 15}
    };
    solution(mat);
}