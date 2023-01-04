#include <bits/stdc++.h>
using namespace std;

bool areEqual(int arr1[], int arr2[]){
 
    // Sort both arrays
    sort(arr1, arr1 + 5);
    sort(arr2, arr2 + 5);
 
    // Linearly compare elements
    for (int i = 0; i < 5; i++)
        if (arr1[i] != arr2[i])
            return false;
 
    // If all elements were same.
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int result = 0;

    cin >> n;

   


    if(result == 0){
        cout << n;
    }
    else{
        cout << result;
    }
    return 0;

}