#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t,com,max_ce;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        
    }
    
    int i=0,j=0;
    for (int k = 0; k < t; k++){   
        cin >> com;
        if (com == 1){
            cin >> i >> j;
            if (i <= n && j >= arr[i])
                arr[i-1] += 1;
            else
                continue;
        } else if (com == 2){
            cin >> i >> j;
            if (i <= n && j<= arr[i])
                arr[i-1] -= 1;
            else
                continue;
        } else if (com == 3){
            cin >> i >> j;
            // if(i <= n){
            //     if(arr[i-2] > arr[i-1] - 1){
            //         if(arr[i-2] - arr[i-1] > 1){
            //             arr[i-2] -= 3;
            //         }
            //         else if(arr[i-2] - arr[i-1] == 1){
            //             arr[i-2] -= 2;
            //         }
            //         else{
            //             arr[i-2] -= 1;
            //         }
            //     }
            //     if(arr[i] < arr[i-1] - 1){
            //         continue;
            //     }
                // arr[i-1] -= 2;



            // else
            //     continue;
        } else if (com == 4){
            cin >> i;
            if (i<=n){
                for (int i=0;i<n;i++){
                    if (arr[i] > 0)
                        arr[i]--;
                }
            } else
                continue;           
        }
        
    }
    for (auto x:arr){
        cout << x << " ";
        
    }
    cout << endl;

    
    return 0;
}
