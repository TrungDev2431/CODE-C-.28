#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];

    }
    for (int i = 0; i < n; i++){
        // a[i] : 0-> i-1
        bool check = true;
        // duyet
        for (int j = 0; j < i; j++){
            if (a[j] == a[i]){
                check = false;
                break;
            }
        }
        if (check){cout << a[i] << " " ; }

    }

}