///week03-3a.cpp �G�X�@���Ĥ@�ؤ�k�A�⤣�O0����X�ӡB�ȩ�ans�A�A��^�h
///Leetcode �ǲ߭p�e 283. Move Zeros
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;///�Ψө�"���O0����"
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)ans.push_back(nums[i]);
        }///�W����"���O0����"�Ȯɩ�bans�̡A���@�U�A��^�h
        ///�A��for�j���^�h
        for(int i=0;i<nums.size();i++){
            if(i<ans.size())nums[i]=ans[i];///��^�h
            else nums[i]=0;///��L����0
        }
    }
};
