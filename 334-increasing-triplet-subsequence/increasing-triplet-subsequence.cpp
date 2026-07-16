class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();

        /*brute force

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
        if(nums[i]<nums[j]&&nums[j]<nums[j+1]){
          return true;
        }
            }
        
        }
        return false;

        */
        int first=INT_MAX;
        int second=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<=first){
                first=nums[i];
            }
            //this method will work when element become greater than first.
            else if(nums[i]<=second){
                second=nums[i];
            }
             //this method will work when element become greater than second.Which mean 1 element is smaller than second and second is samller the it is increasing triplet.
            else{
                return true;
            }
        }
return false;
    }
};