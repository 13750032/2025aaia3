///week04-3.cpp
///LeetCode �ǲ߭p�e��7�D 66. Plus One
///1 2 3
///    4�̥���}�l�A+1����
///4 3 2 1
///      2�̥k��}�l�A+1����
///9 4 9
///    0���i��A����?���i�Hreturn�~��
///  5�̥k��+1����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();///�W�g�йL �}�C���j�p
        for(int i=N-1;i>=0;i--){///�˹L�Ӫ��j��
            if(digits[i]==9){///�n�i��A�·ФF(���൲��)
                digits[i]=0;///�g�{0�A�~�򰵡B������
            }else{///���ζi�쪺�ܡA�W�n��!����++�N�����F!
                digits[i]++;///²��+1��
                return digits;///��������}�C����return
            }
        }
        digits.insert(digits.begin(),1);///�̥���n���J1
        return digits;///�����F
    }
};
