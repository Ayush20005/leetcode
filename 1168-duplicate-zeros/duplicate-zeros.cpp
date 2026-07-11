class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == 0) {

                // Shift elements to the right
                for (int j = n - 1; j > i; j--) {
                    arr[j] = arr[j - 1];
                }

                // Duplicate zero
                arr[i + 1] = 0;

                // Skip the duplicated zero
                i++;
            }
        }
    }
};