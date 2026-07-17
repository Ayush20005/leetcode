class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        /*
        long long num=0;
        for(int i=0;i<n;i++){
            num=num*10+digits[i];
        }
        num++;
        vector<int>ans;
        while(n>=0){
        ans.push_back(num%10);
        num=num/=10;
        }
reverse(ans.begin(),ans.end());
return ans;
*/


    
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else{
            digits[i]=0;
            }
        }
            digits.insert(digits.begin(),1);
return digits;


    }
};