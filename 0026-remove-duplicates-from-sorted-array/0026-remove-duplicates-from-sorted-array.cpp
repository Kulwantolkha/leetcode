class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(auto it=nums.begin();it!=nums.end();it++){
            st.insert(*it);
        }
        nums.clear();
        for(auto it:st){
            nums.push_back(it);
        }
        return st.size(); 
    }
};