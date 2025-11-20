///week11-2a.cpp
///SOIT107_ADVANCE_008_C_C++
#include <iostream>
using namespace std;
int prime(int n){
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
        }
    return 1;
}
int main() {
    int n;
    cin >> n;
    cout << "[" << prime(n) << "]";
    return 0;
}


///== 以上是自[瘋狂雲端]下載的資料 請自行剪貼到各檔中進行寫作
///*
#include <iostream>
using namespace std;
.....
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
///* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*+/
///*/
