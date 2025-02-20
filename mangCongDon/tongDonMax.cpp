/*
cho 1 mảng
có nhiều truy vấn
có thể sắp xếp lại các vị trí
tính tông max của cacs truy vấn
các truy vấn là tông từ l đến r
*/

// muốn tăng tổng thif đứa giá trị Max lần lượt về các vị trí được truy vấn nhiều nhất
/* b1: xét xem vị trí dc truy vấn nhiều
- dựa và mảng hiệu xác định các vị trí được truy vấnn bao nhiêu lần


*/

#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;
int main(){
    int n,q;
    cin >> n >> q; // nhập vào số truy vấn
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int D[n+1] = {0};    // ban đầu cho bằng 0 để tìm được số lần truy vấn ở mỗi vị trí từ l đến r của all truy vấnvấn
    while(q--){          // thực hiện nhiều truy vấn 1 lúc và nó sẽ ra được số lần truy vấn của mỗi vị trí
        int l,r;
        cin >> l >> r;
        --l;--r; // cho bằng 0 bắt đầu từ 0 chỉ số theo 0
        D[l]+=1;
        D[r+1]-=1;
    }

    // khôi phục mảng cộng dồn
    int F[n+1];
    F[0] = D[0];
    for (int i = 1; i < n+1; i++){
        F[i] = F[i-1] + D[i];
    }
    // thử in ra tần xuất truy vấn tại mỗi vị trí
    cout << "thu tu truy van tai moi vi tri: ";
    for (int i = 0; i < n; i++){
        cout << F[i] << " ";
    }
    //xắp xếp lại thứ tự được truy vấn nhiều nhất giảm dần
    sort(F, F+n, greater<int>());
    sort(a, a+n, greater<int>());
    // mỗi 1 chỉ số i trong mảng F là số lần truy vấn tại vị trí i lớn nhất với lớn nhất 
    //a[i] là giá trị tại vị trí truy vấn
    // F[i] là số lần truy vấn tại vị trí i
    long long res = 0;
    for (int i = 0; i < n; i++){
        res += 1ll*a[i]*F[i];     // nhân số lần truy vấn tại vị trí i với giá trị tại vị trí i //vì tất cả cùng là max nên tổng cuối cùng sẽ maxmax
    }
    cout << "\nket qua cua tong cac truy van tu l den r max la: " << res << endl;

}

/*
test
6 2
5 2 5 3 5 1
2 5 //l->rr
2 4 

lần truy vấn 
(2->3)  = 2
(4->5)  = 1
*/