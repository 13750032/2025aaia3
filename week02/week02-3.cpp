//week02-3.cpp 使用C++2011年新版的字串stoi()功能
///在CodeBlocks裡，必須開啟Setting-Compiler...把C++11打勾勾
//SOIT106_ADVANCE_001 Using C++
#include <iostream>//cin cout讀入資料、印出資料
#include <string>//string字串的功能
using namespace std;///使用"命名空間"標準的std
int main(){
	string a;///宣告字串a
	cin>>a;///讀入字串a
	string ans;///宣告字串ans放答案用的
	int N=a.length();///字串a的長度
	for(int i=N-1;i>=0;i--){///倒過來放的迴圈
		ans+=a[i];///在迴圈哩，把a[i]塞到ans後面
	}
	cout<<a<<"+"<<stoi(ans)<<"="<<stoi(a)+stoi(ans)<<endl;
}//stoi() is "string to int "把字串變成整數
