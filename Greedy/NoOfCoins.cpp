class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
      sort(coins.begin(), coins.end(), greater<int>());
      int total = 0;
       for(int coin : coins){
        if(amount == 0) break;
        if(coin<= amount){
            total += amount/coin;
            amount = amount%coin;
        }
       }

       if(amount != 0) return -1;
       return total;
    }
};
