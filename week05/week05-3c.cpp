///week05-3c.cpp Part 1:Input Part 2:Output
///Part 3:stringstream Part 4:reverse�ϹL��
///CPE �ĤG�D  UVA 483 �˹L��
#include <iostream>
#include <sstream>///Part 3:stringstream���ɮ׬Osstream
#include <algorithm>///Part 4:reverse���t��k
using namespace std;
int main(){
    string line;///�@��r���r�� Part 1:Input
    while(getline(cin,line)){///Ū���
        stringstream ss(line);///Part 3��stringstream�_�r
        string word;///�r��o��
        ss>>word;///�����Y�b�o��
        reverse(word.begin(),word.end());
        cout<<word;///�����Y �S���Ů�
        while(ss>>word){///Part 3:��ss�_�r
            reverse(word.begin(),word.end());///Part 4
            cout<<" "<<word;///+���[
            ///cout<<"Ū��F"<<word<<endl;///Part
        }
        cout<<endl;///cout<<line<<endl;/// Part 2:Output
    }
}
