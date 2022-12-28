#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n;
    cin >> n;
    long long count = 0;
    long long i = 0;
    long long len = n.length();
    while (i < len){
        // cout << "i :" << i << endl; 
        // cout << "n[i] :" << n[i] << endl;
        if(i == len){
            break;
        }
        if(i == 0){
            count += 1;
            i++;
        }
        else if(n[i] > n[i-1]){
            count += 1;
            i++;
        }
        else{
            i++;
        }
    }
    cout << count;
    return 0;
}