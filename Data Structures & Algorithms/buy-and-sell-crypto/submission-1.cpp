class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int profit = 0;
        for(int i=0;i<arr.size();i++){
            int b = arr[i];
            for(int j=i+1;j<arr.size();j++){
                int s = arr[j];
                profit = max(profit,s-b);
            }
        }
        return profit;
    }
};
