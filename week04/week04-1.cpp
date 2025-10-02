///week04-1.cpp  家览肈酚帝σ肈糶祘Α
///LeetCode 珼驹肈 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;///秨﹍碞耻硂或瞺
        while(numBottles>=numExchange){///狦瞺计>=传秖
            numBottles=numBottles-numExchange+1;///传瞺都
            ans++;///耻瞺
            numExchange++;///传夹"瞺"
        }
    return ans;
    }
};
