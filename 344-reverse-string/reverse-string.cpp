class Solution {
public:
void helper(vector<char>&s,int left ,int right){
    if(left>=right) return;
    
        swap(s[left],s[right]);
        helper(s,left+1,right-1);
    
}
    void reverseString(vector<char>& s) {
       
       /* step-1:
        if(i >= j)
        return;
        
        swap(s[i], s[j]);
       solve(s, i + 1, j - 1);
        //thuis will swap the value of the array. 
        
    }

    void reverseString(vector<char>& s) {
        solve(s, 0, s.size() - 1);
        // this will return the reverse string .
        */
        //step-2
      
      /*
       int left=0;
       int right=n-1;
       while(left<right){
         swap(s[left],s[right]);
         left++;
         right--;
       }
       */
int n=s.size();
helper(s,0,n-1);



    }
};