class Solution {
public:

int f(int ind,vector<int>&arr){
        int prev=arr[0];
        int prev2=0;
        for(int i=1;i<ind;i++){
            int pick=arr[i];
            if(i>1) pick+=prev2;
        int notPick=prev;
        int curr_i=max(pick,notPick);
        prev2=prev;
        prev=curr_i;
        }

return  prev;
}
    int rob(vector<int>& arr) {
           int n=arr.size();
            if(n==1)return arr[0];

            vector<int>arr1; //considering 1st house to be robbed and not last
            vector<int>arr2;//last house to be robbed and  not 1st house
            for(int i=0;i<n;i++){
                if(i!=n-1)arr1.push_back(arr[i]);
                if(i!=0)arr2.push_back(arr[i]);
            }

            int res1=f(arr1.size(),arr1);
            int res2=f(arr2.size(),arr2);
            return max(res1,res2);
    }
};