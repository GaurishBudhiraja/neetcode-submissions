class Solution {
public:
    int maxArea(vector<int>& heights){
        int l = 0,r=heights.size()-1,ar=0;
        while(l<r){
            int area = min(heights[l],heights[r])*(r-l);
            ar = max(ar,area);
            if(heights[l] <= heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ar;
    }
};
