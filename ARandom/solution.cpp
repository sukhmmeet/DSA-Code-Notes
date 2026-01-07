#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

double myPow(double x, int n) {
    if(n == 0){
        return 1.0;
    }
    long long exp = n;

    if(exp < 0){
        x = 1/x;
        exp = -exp;
    }

    double ans = 1.0;
    while(exp > 0){
        if(exp % 2 == 1){
            ans *= x;
        }
        x *= x;
        exp /= 2;
    } 
    return ans;
}



int main()
{
    int n = 2451325;
    cout << (int) log10(n) + 1 << endl;
}