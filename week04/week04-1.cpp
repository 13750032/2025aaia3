///week04-1.cpp  �����D�A�ӵۦ��D�g�{��
///LeetCode �D���D 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;///�@�}�l�N�ܤF�o��h�~
        while(numBottles>=numExchange){///�p�G�~�l��>=�I���q
            numBottles=numBottles-numExchange+1;///�I���@�~����
            ans++;///�h�ܤ@�~�F
            numExchange++;///�I������"�h�@�~"
        }
    return ans;
    }
};
