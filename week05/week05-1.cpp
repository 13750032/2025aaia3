//week05-1.cpp
//Leetcode �ǲ߭p�e Built-In Functions �Ĥ@�D 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//��r���ܦ����e�Ъ�cin iostream
        string word;//�r�ꪺword
        //ss>>word;//�ܹ����e�Ъ� cin<<word
        //cout<<"Ū��F"<<word<<"\n";//���ե�
        //ss>>word;//�ܹ����e�Ъ� cin<<word
        //cout<<"Ū��F"<<word<<"\n";//���ե�
        while(ss>>word){//�@��Ū���
            //�̭��ƻ򳣤���
        }
        return word.length();//return 0;//�H�K
    }
};
