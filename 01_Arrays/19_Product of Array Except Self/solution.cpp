class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pref=1;
        int suf=1;
        vector<int>prod(n,1);
        for(int i=0;i<n;i++){
            prod[i]=pref;
            pref *=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            prod[i] *=suf;
            suf *=nums[i];
        }
        return prod;
    }
};

