#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, ans, v;
    while (scanf("%d", &k) != EOF) {
        ans = 0;
        while (k--) {
            scanf("%d", &v);
            ans += v;
    }
    printf("%d\n", ans);
    }
    


    return 0;
}