class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi=0;
        int left=0;
        int count = 0;

/*
        // Count vowels in the first window
        for (int i = 0; i < k; i++) {
            if (s[i]) {
                count++;
            }
        }

        int maxVowel = count;

        // Slide the window
        for (int i = k; i < n; i++) {
            // Add new character
            if (isVowel(s[i])) {
                count++;
            }

            // Remove left character
            if (isVowel(s[i - k])) {
                count--;  // Only decrease if it was a vowel
            } 
            // If it was not a vowel, we do nothing in else.

            // Update the maximum
            maxVowel = max(maxVowel, count);
        }

        return maxVowel;

        */
for(int i=0;i<s.size();i++){

         if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        count++;
    }


    if(i-left+1==k){


maxi=max(maxi,count);
      if (s[left] == 'A' || s[left] == 'E' ||
                    s[left] == 'I' || s[left] == 'O' ||
                    s[left] == 'U' ||
                    s[left] == 'a' || s[left] == 'e' ||
                    s[left] == 'i' || s[left] == 'o' ||
                    s[left] == 'u') {
                    count--;
                }
    
   left++; 
    }


}
return maxi;
    }
};