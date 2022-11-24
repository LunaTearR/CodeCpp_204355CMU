#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n,count,max_;
    count = 1;
    cin >> n;
    max_ = n;
    while (n > 1){
        if(n % 2 == 0){
            n = pow(n,0.5);
            max_ = max(n,max_);
            count++;
        }
        else{
            n = pow(n,1.5);
            max_ = max(n,max_);
            count++;
        }
    }
    cout << max_ << " " << count;
    return 0;
}
