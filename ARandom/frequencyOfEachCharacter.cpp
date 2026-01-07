#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    unordered_map<char,int> freq;
    for(char c : str){
        if(c != ' '){
            freq[c]++;
        }
    }
    for(auto it : freq){
        cout << it.first << " " << it.second << endl;
    }
}