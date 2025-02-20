/*
tính tổng 1 hình chữ nhạt trong mảng 2 chiều 
biết 2 hàng 2 cột
có các truy vấn

mỗi truy vẫn có 4 số là hàng và cột của hình chứ nhật đó

*/

#include <bits/stdc++.h>

using namespace std;

int a[1005][1005];
long long prefix[1005][1005];
int main(){
    int m ,n;
    cin >> m >> n;
    int a[m][n];
    for(int i = 1 ; i <= m ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 1 ; i <= m ; i++){
        for (int j = 1 ; j <= n ; j++){
            prefix[i][j] = prefix[i][j-1] + prefix[i-1][j] - prefix[i-1][j-1] +a[i][j];
        }
    }

    int truyvan; cin >> truyvan;
    while (truyvan--){
       int x1 , y1 , x2 , y2 ;
       cin >> x1 >> y1 >> x2 >> y2 ;
       cout << prefix[x2][y2] - prefix[x2][y1-1] - prefix[x1-1][y2]+ prefix[x1-1][y1-1] << endl ;
    }
    return 0;


}