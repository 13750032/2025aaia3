///week08-1.cpp Leetcode學習計畫Matrix矩陣第一題
///1672. Richest Customer Wealth找到最有錢的人，有多少錢?
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            int now=0;///迴圈前面now=0
            for(int j=0;j<accounts[0].size();j++){
                now+=accounts[i][j];///把錢加起來
            }///迴圈裡面 更新now 陣列 左手i 右手j
            ///迴圈後面now拿來用
            ans=max(ans,now);///最有錢的人 更新答案
        }
        return ans;
    }
};
