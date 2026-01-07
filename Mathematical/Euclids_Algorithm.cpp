#include<bits/stdc++.h>
using namespace std;

int algorithm(int a, int b){
    while(a != 0 && b != 0){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return max(a,b);
}

int main(){
    cout << algorithm(20,28) << endl;
}