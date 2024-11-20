class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int tsb=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    tsb=tsb+1;
                }
            }
        }
        return tsb;
    }
};