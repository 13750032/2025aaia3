///week05-4.cpp
///Leetcode�ǲ߭p�e Built-In Function �ĤG�D709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }///�C�Ӧr�����ܦ��p�g(���㪩�n #include <ctype.h>
        ///�άO��#include <cctype>��ӬO�P�@���ɮ�
        return s;
    }
};
