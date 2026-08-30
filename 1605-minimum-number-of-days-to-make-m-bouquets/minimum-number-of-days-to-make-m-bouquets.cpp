#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible(vector<int>& arr, int days, int m, int k) {

        int bouquet = 0;
        int count = 0;

        for(int i = 0; i < arr.size(); i++) {

            if(arr[i] <= days) {
                count++;

                if(count == k) {
                    bouquet++;
                    count = 0;
                }
            }
            else {
                count = 0;
            }
        }

        return bouquet >= m;
    }

    int minDays(vector<int>& arr, int m, int k) {

        long long total = 1LL * k * m;

        if(total > arr.size())
            return -1;

        int mini = *min_element(arr.begin(), arr.end());
        int maxi = *max_element(arr.begin(), arr.end());

        int low = mini;
        int high = maxi;
        int result = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(possible(arr, mid, m, k)) {
                result = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return result;
    }
};