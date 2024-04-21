//Maximum Sum of Non-Adjacent Elements | House Robber | 1-D | DP on Subsequences 
//Space optimised Tabular (bottom up)dp;

class Solution {
public:
int f(int ind,vector<int>&arr){
    int prev=arr[0];
    int prev2=0;
    for(int i=1;i<=ind;i++){
        int pick=arr[i];
        if(i>1)pick+=prev2;
        int notPick=prev;
        int curri=max(pick,notPick);
        prev2=prev;
        prev=curri;
    }
    return prev;
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        return f(n-1,nums);
    }
};