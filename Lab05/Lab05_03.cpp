#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;
    list<char> word;
    list<char>::iterator cursor = word.begin();
    int l = n.length();
    for(int i = 0; i < l; i++){
        if(n[i] == '['){
            cursor = word.begin();
        }
        else if(n[i] == ']'){
            cursor = word.end();
        }
        else{
            word.insert(cursor,n[i]);
        }
    }
    for (cursor = word.begin(); cursor != word.end(); ++cursor){
        cout << *cursor;
    }
    
    return 0;
}