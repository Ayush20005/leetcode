class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
       /*
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
       int left=0;
       int right=n-1;
       while(left<right){
         swap(s[left],s[right]);
         left++;
         right--;
       }
    }
};