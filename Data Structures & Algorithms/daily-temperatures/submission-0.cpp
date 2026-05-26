class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size(),0);
        for(int i=0;i<temp.size();i++){
            for(int j=i+1;j<temp.size();j++){
                if(temp[j] > temp[i]){
                    res[i] = j-i;
                    break;
                }
            }
        }
        return res;
    }
};
