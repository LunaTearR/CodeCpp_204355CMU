#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word,T,B;
    getline(cin, word);
    int n = word.length();
    stringstream X(word);
    

    while(X >> T){
        reverse(T.begin(),T.end());
        cout << T << " ";
    }
    

    return 0;
}