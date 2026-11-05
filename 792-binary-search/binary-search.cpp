class Solution {
public:
    int search(vector<int>& nums, int target) {
 int n=nums.size();
       /*
          //brute force 0(n)
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
*/

        //using binary search 0(logn)
        int low=0 ;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target) return mid;

            else if(nums[mid]>target) {
                high=mid-1;
            }

            else{
                low=mid+1;
            }
        }
return -1;
    }
};