class Solution {
public:
    int maxScore(vector<int>& cardScore, int k) {

        int n = cardScore.size();

        // Sum of all cards
        int totalSum = 0;
        for (int x : cardScore) {
            totalSum += x;
        }

        // Number of cards left in the middle
        int windowSize = n - k;

        // If k == n, we take all cards
        if (windowSize == 0) {
            return totalSum;
        }

        // Find minimum sum window of size n-k
        int windowSum = 0;

        for (int i = 0; i < windowSize; i++) {
            windowSum += cardScore[i];
        }

        int minSum = windowSum;

        int left = 0;

        for (int right = windowSize; right < n; right++) {

            windowSum += cardScore[right];
            windowSum -= cardScore[left];

            left++;

            minSum = min(minSum, windowSum);
        }

        return totalSum - minSum;
    }
};