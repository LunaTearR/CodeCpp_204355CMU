#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a = 0,count = 0;
    cin >> n;
    int m [n] ;
    for (int i = 0; i < n; i++){
        cin >> m[i];
        a += m[i];
    }
    a = a/n;
    for (int i = 0; i < n; i++){
        if(m[i] > a){
            count += m[i] - a;
        }
    } 
    cout << count;
    
    return 0;
}