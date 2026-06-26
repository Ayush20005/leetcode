class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        sort(costs.begin(), costs.end());
/*
        int count = 0;

        for(int i = 0; i < costs.size(); i++) {

            if(coins >= costs[i]) {
                coins -=costs[i];
                count++;
            }
            else {
                break;
            }
        }

        return count;
        */
        
        vector<int> freq(100001, 0);

        // Count frequencies
        for (int cost : costs) {
            freq[cost]++;
        }

        int count = 0;

        // Buy from cheapest to costliest
        for (int cost = 1; cost <= 100000; cost++) {

            while (freq[cost] > 0 && coins >= cost) {
                coins -= cost;
                count++;
                freq[cost]--;
            }
        }

        return count;
    }
};
    
