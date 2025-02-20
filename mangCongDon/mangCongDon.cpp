/*
tính tống các giá trì trong mảng từ index left đến index right
*/

#include <iostream>

using namespace std;
using ll = long long;

int main(){
    int n, truyvan;
    cin >> n >> truyvan;
    int a[n];
    for (int i= 0; i< n; i++){
        cin >> a[i];
    }
    ll pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++){
        pre[i] = pre[i-1] + a[i];
    }

    while (truyvan--){
        int l, r;
        cin >> l >> r;
        if (l == 0){
            cout << "tong cac gtr trong mang tu index left den right: " << pre[r] << endl;
        }
        else {
            cout << "tong cac gtr trong mang tu index left den right: " << pre[r] - pre[l - 1] << endl;
        }
    }
    return 0;
    
}