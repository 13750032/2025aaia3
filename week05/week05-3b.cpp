///week05-3b.cpp Part 1:Input Part 2:Output
///Part 3:stringstream Part 4:reverse反過來
///CPE 第二題  UVA 483 倒過來
#include <iostream>
#include <sstream>///Part 3:stringstream的檔案是sstream
#include <algorithm>///Part 4:reverse的演算法
using namespace std;
int main(){
    string line;///一行字的字串 Part 1:Input
    while(getline(cin,line)){///讀近來
        stringstream ss(line);///Part 3用stringstream斷字
        string word;///字放這邊
        while(ss>>word){///Part 3:用ss斷字
            reverse(word.begin(),word.end());///Part 4
            cout<<"讀到了"<<word<<endl;///Part
        }
        cout<<line<<endl;/// Part 2:Output
    }
}
