class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int r=target-nums[i];
            if(m.find(r) !=m.end()){
                ans.push_back(m[r]);
                ans.push_back(i);
            }
            m[nums[i]]=i;

        }
        return ans;
            
    }
};

//BRUTE FORCE 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a = 0;
        int b = 0;
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    a = i;
                    b = j;
                }
            }
        }
        return{a,b};
    }
};


