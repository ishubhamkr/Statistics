#include <cmath>
#include <bits/stdc++.h> 
using namespace std;

double geom(int k, double p) {
    double result = pow(1 - p, k - 1)*p;
    return result;
};

int main() {
    double tmp1, tmp2, k, p;
    cin >> tmp1 >> tmp2 >> k;
    p = tmp1/tmp2;
    cout << round(geom(k, p)*1000)/1000 << endl;
    return 0;
}