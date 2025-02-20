//  đếm số lần xuất hiện của các phần tử xuất hiện trong mảng theo thứ tự tăng dần 
#include <iostream>

using namespace std;

int cnt[1000001];

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int dem = 0;
    // đánh dấu số lần xuát hiện
    for (int i=0;i<n;i++){
        cnt[a[i]] ++;
    }

    cout << "Tan suat xuat hien: " << endl;
    //in ra tần xuất suất hiện trong mảngmảng
    for (int i=0; i<1000001; i++){
        if (cnt[i]>=1){
            cout << i << " " << cnt[i] << endl;
        }
    }
    return 0;

}