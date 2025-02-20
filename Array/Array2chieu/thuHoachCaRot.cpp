/*
tính tổng 1 hình chữ nhạt trong mảng 2 chiều 
biết 2 hàng 2 cột
có các truy vấn

mỗi truy vẫn có 4 số là hàng và cột của hình chứ nhật đó

*/

#include <bits/stdc++.h>

using namespace std;

int a[1005][1005];
int main(){
    int m ,n;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }

    int truyvan; cin >> truyvan;
    while (truyvan--){
        int x1, x2, y1, y2; //x cột y là hàngng
        cin >> x1 >> y1 >> x2 >> y2;
        int tong = 0;

        //o(n^2)
        for(int i = x1 ; i <= x2 ; i++){
            for(int j = y1 ; j <= y2 ; j++){
                tong += a[i][j];
            }
        }
        cout << tong << endl;
    }
    return 0;


}