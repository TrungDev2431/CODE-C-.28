#include <iostream>

using namespace std;
//o(n)
using ll = long long;
// 0 -> 1000000
int cnt[1000001];   // khoi tao trong vung nho bang 0
//khai báo mảng quá lớn trong hàm main sẽ bị tran bộ nhớ stack
int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
// mảng đánh giấu
for (int i = 0; i < n; i++) {
    // đánh dấu sự xuất hiện cảu a[i]
    cnt[a[i]] = 1; // a[i] là con trỏ trỏ đến vị trí của mảng đánh giấu có gái trị bằng a[i]
//o(1)
}
// tối ưu bằng cách tìm max cho for đến max thôi
int dem = 0;   // số gái trị khác nhau
cout << "cac co khac nhau xh trong mang: ";
for (int i = 0; i <= 1000000; i++) {//o(1)
    if (cnt[i] == 1) {   // giá trị đã xuất hiện được đánh giấu
        dem++; 
        cout << i << " ";
    }    
}

cout << endl;
cout << "so gia tri khac nhau: " << dem << endl;
return 0;
}