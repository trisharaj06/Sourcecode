// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int sum = 0, ans = arr[0];
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            ans = max(sum,ans);
            if(sum < 0){
                sum = 0;
            }
           // cout<<sum<<"  "<<ans<<endl;
        }
        return ans;
    }
};
