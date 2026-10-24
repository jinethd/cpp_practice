
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> pref,suff;
        int pmax=0,smax=0;
        for(int i=0;i<height.size();i++){
            pmax=max(pmax,height[i]);
            pref.push_back(pmax);
        }
        for(int i=height.size()-1;i>=0;i--){
            smax=max(smax,height[i]);
            suff.push_back(smax);
        }
        int amount=0;
        for(int i=0;i<height.size();i++){
            int lim = min(pref[i],suff[suff.size()-1-i]);
            if(height[i]<lim) amount+=lim-height[i];
        }
        return amount;
    }
};
