class Solution {
public:
    int trap(vector<int>& height) {
        int ar = 0,l=0,r = height.size()-1;
        if(height.empty()){
            return 0;
        }
        int lm = height[l],rm = height[r];
        while(l<r){
            if(lm<rm){
                l++;
                lm = max(lm,height[l]);
                ar += lm - height[l];
            }
            else{
                r--;
                rm = max(rm,height[r]);
                ar += rm - height[r];
            }
        }
        return ar;
    }
};
