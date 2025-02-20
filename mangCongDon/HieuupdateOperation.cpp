// mảng hiệu 
// cộng thêm k đơn vị từ vị trí trái sang phải in ra mảng đó
#include <iostream>

using namespace std;

int main(){
    int n,q;
    cin >> n >> q; // nhập vào số truy vấn
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int D[n+2];   // cho thừa ra để ko bị trống
    // xây dựng mảng hiệu
    D[0] = a[0];
    for (int i = 1; i < n; i++){
        D[i] = a[i] - a[i-1];
    }
    //duyệt mảng hiệu
    cout << "mang hieu D[n] la: ";
    for (int i = 0; i < n; i++){
        cout << D[i] << " ";
    }
    cout << endl;



    // xây dựng mảng cộng dồn của D sẽ ra A
    cout << "mang A[n]: ";
    int F[n+1];
    F[0] = D[0];  // ban đầu 
    for (int i = 1; i < n; i++){
        F[i] = D[i] + F[i-1];  // cộng dồn
    }



    // in ra mmảng F sẽ bằng mảng ban đầu
    for (int i = 0; i < n; i++){
        cout << F[i] << " ";
    }
    cout << endl;



    cout << "nhap cac truy van: " << endl;
    //thực hiện các truy vấn
    while(q--){
        int l,r,k;  // k là giá trị tăng thêm mỗi gtr trong mảng từ l đến r
        cin >> l >> r >> k;
        D[l]+=k;    // từ giá trị tại vị trí l tăng tất cả lên k đơn vịvị
        D[r+1]-=k;  // từ giá trị tại vị trí r+1 trừ đi để về mảng ban đầu
    }
    // xây dựng mảng cộng dồn sau khi tăng sẽ ra dãy cần tìm
    cout << "mang sau khi tang k don vi tu l den r: ";
    int Sum[n+1];
    Sum[0] = D[0];  // ban đầu 
    for (int i = 1; i < n; i++){
        Sum[i] = D[i] + Sum[i-1];  // cộng dồn
    }
    for (int i = 0; i < n; i++){
        cout << Sum[i] << " ";
    }
    return 0;
}

/*
test case
7 3
8 5 8 9 7 6 9
0 5 0 
0 5 0
1 5 1
*/