class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       /*
        int low=0, high= nums.size();
        while(low<high)
        {
            int mid= low + (high-low)/2;
            if(nums[mid]>nums[mid+1]&& nums[mid]>nums[mid-1])
             return mid;
            else
            {
                if(nums[mid]<nums[mid+1])
                low = mid+1;
                else
                high= mid;
            } 
        }
        return 0;
        */

        /*
 int left =0;
 int right=nums.size();
 while(left<right){
    int mid=left+(right-left)/2;
    if(nums[mid]<nums[mid+1]) left=mid+1;
    else right=mid;
 }
return left;
*/

int maxi=0;
for(int i=0;i<nums.size();i++){
  if(nums[i]>nums[maxi]){
maxi=i;
  }
}
return maxi;
    }
};