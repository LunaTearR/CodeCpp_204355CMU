#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;
    cin >> n >> m;
    long long high [n];
    long long distance [n];

    long long a,b;
    long long sum_ = 0;
    long long highest = 0;
    long long result_high [m];
    long long result_dis [m];

    for(int i = 0;i < n; i++){
        cin >> high[i];
    }
    for(int i = 0;i < n; i++){
        cin >> distance[i];
    }
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        for(int j =a; j<= b; j++){
            highest = max(high[j],highest);
            sum_ = sum_ + distance[j];
        }
        result_high[i] = highest;
        result_dis[i] = sum_;
        sum_ = 0;
        highest = 0;
    }
    for(int i = 0; i < m;i++){
        cout << result_high[i] << " " << result_dis[i] << "\n";
    }
    return 0;
}