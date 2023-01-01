#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;
    cin >> n >> m;
    long long high [n];
    long long distance [n];

    // long long blk_idx = -1;
    // long long maximum_block;
    // long long minimum_block;
    // long long blk_sz = sqrt(n);
    // long long block_high[n];
    // long long block_dis[n];
    long long l,r;
    long long result_high [m];
    long long result_dis [m];
    long long sum_ = 0;

    for (int i=0; i<n; i++){
        cin >> high[i];
        // if (i%blk_sz == 0){
        //     // entering next block incementing block pointer
        //     maximum_block = high[i];
        //     blk_idx++;
        //     block_high[blk_idx] = high[i];
        // }
        // if(maximum_block < high[i]){
        //     block_high[blk_idx] = high[i];
        // }
    }
    // blk_idx = -1;
    for (int i=0; i<n; i++){
        cin >> distance[i];
        // if (i%blk_sz == 0){
        //     // entering next block incementing block pointer
        //     minimum_block = distance[i];
        //     blk_idx++;
        //     block_dis[blk_idx] = distance[i];
        // }
        // if(minimum_block > distance[i]){
        //     block_dis[blk_idx] = distance[i];
        // }
    }
    int q;
    for (int i = 0; i < m; i++){
        cin >> l >> r;
        q = high[l];
        while (l <= r ){
            if(q < high[l])
                q = high[l];
            sum_ += distance[l];
            l += 1;
        }

        result_high[i] = q;
        result_dis[i] = sum_;
        sum_ = 0;
    }
    for(int i = 0; i < m; i++){
        cout << result_high[i] << " " << result_dis[i] << "\n";
    }

    return 0;
}