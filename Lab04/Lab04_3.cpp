#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    if(n <= 3){
        cout << n;
    }
    else if(n == 4){
        cout << 3;
    }
    else if(n <= 8){
        cout << 4;
    }
    else if(n <= 16){
        cout << 5;
    }
    else if(n <= 32){
        cout << 6;
    }
    else if(n <= 64){
        cout << 7;
    }
    else if(n <= 128){
        cout << 8;
    }
    else if(n <= 256){
        cout << 9;
    }
    else if(n <= 512){
        cout << 10;
    }
    else if(n <= 1024){
        cout << 11;
    }
    else if(n <= 2048){
        cout << 12;
    }
    else if(n <= 4096){
        cout << 13;
    }
    else if(n <= 8192){
        cout << 14;
    }
    else if (n <= 16384){
        cout << 15;
    }
    return 0;
}
