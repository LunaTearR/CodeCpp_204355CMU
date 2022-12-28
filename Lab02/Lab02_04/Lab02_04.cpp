#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long result;
    cin >> n;
    result = (n * (n + 1) / 2) + ((n * (n + 1) / 2)*(2 * n + 1) / 3);
    cout << result;
}