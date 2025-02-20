#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;int k;
    cin >> n >>k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int dem = 0;
    //in ra các cặp 2 số trong mảng
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << a[i] << " " << a[j] << endl;    
            if(a[i]+a[j]==k){
                dem++;
            }
        }
    }
    cout << dem << endl;
    return 0;
}