#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n;
    cin >> n;
    int count = 0;
    int i = 0;
    int c = 0;
    int row = 0;
    int len = n.length();
    char arr[1000];
    while (i < len){
        // cout << "i :" << i << endl; 
        // cout << "n[i] :" << n[i] << endl;
        if(i == len){
            break;
        }
        if(i == 0){
            count += 1;
            row++;
            arr[i] = n[i];
        }
        else{
            for (int j = 0; j < row; j++){
                if(arr[j] >= n[i]){
                    arr[j] = n[i];
                    c++;
                    break;
                }
            }
            if (c != 1){
                arr[row] = n[i];
                row++;
                count += 1;
            }else
                c = 0;
        }
        i++;
        // cout << "row :" << count<< endl;
        // cout << "c :" << c << endl;
    }
    cout << count;
    return 0;
}

