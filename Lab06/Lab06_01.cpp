#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;
    cin >> n;
    long long cost = 0;
    long long curr;

    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i = 0; i < n; i++){
        cin >> m;
        pq.push(m);
    }
    for(int i = 0; i < n-1; i++){
        curr = pq.top();
        pq.pop();
        curr += pq.top();
        pq.pop();
        cost += curr;
        pq.push(curr);
    }
    cout << cost;

   return 0;
}