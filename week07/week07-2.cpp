///week07-2.cpp ���e�P�P�@��
///�e�X�W�j������ΡA�Ʀr�]�_��
///TAICA ��j����¦�{���]�p(C++)�������D �Ĥ��D
#include <iostream>
#include <cmath>///�N�OC��math.h�̭���sin() cos() abs() sqrt()
using namespace std;
int main(){
    int n;///Part 1:Input
    cin>>n;
    for(int i=1;i<n*2;i++){///Part 2:Output
        for(int j=1;j<n*2;j++){
            ///�L�X�Ӥ���A�o�{�����ߪ�1�ܦ��N��/���I�F��!!
            int d=max(abs(i-n),abs(j-n));
            cout<<d+1;///cout<<n;
        }
        cout<<endl;///cout<<"�{�bi�O:"<<i<<endl;///�Ӽh������
    }
}///2�|���T�h�ӡA3�|�����h�ӡA4�|���C�h�ӡA5�|���E�h��
