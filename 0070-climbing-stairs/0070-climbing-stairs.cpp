class Solution {
public:
    int climbStairs(int n) {
        /*
        if(n==0)return 1;
        if(n==1)return 1;//suppose only one stair we can clicmb in only one way same apply for 0 stairss

        int left=climbStairs(n-1); //climbing 1 step at a time
        int right=climbStairs(n-2); //climbing 2 stpes at a time
        return left+right;
But its taking so much tc of O(2^n) .when n is so big  we cam get TIme Limit Exceeded
        */
        if(n<=1)return n;
        vector<int>dp(n+1,-1);
        dp[0]=1; dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};