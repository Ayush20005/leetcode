class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int left=0;
       int ans=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        
                
if(i-left+1==k){
            if(sum>=threshold*k){
                ans++;
            }
        
//for the next window .
           sum-=arr[left];
           left++;
}
        
        }
    return ans;
    }
};