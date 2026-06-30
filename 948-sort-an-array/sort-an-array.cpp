 class Solution {
public:
    void merge(vector<int>& nums, int s, int m, int e) {
        int n1 = m - s + 1;
        int n2 = e - m;

        vector<int> arr1(n1);
        vector<int> arr2(n2);

        // Copy left half
        for (int i = 0; i < n1; i++) {
            arr1[i] = nums[s + i];
        }

        // Copy right half
        for (int i = 0; i < n2; i++) {
            arr2[i] = nums[m + 1 + i];
        }

        int i = 0, j = 0, k = s;

        // Merge the two sorted arrays
        while (i < n1 && j < n2) {
            if (arr1[i] <= arr2[j]) {
                nums[k] = arr1[i];
                i++;
            } else {
                nums[k] = arr2[j];
                j++;
            }
            k++;
        }

        // Copy remaining elements of arr1
        while (i < n1) {
            nums[k] = arr1[i];
            i++;
            k++;
        }

        // Copy remaining elements of arr2
        while (j < n2) {
            nums[k] = arr2[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int>& nums, int s, int e) {
        // Base case
        if (s >= e)
            return;

        int m = s + (e - s) / 2;

        mergeSort(nums, s, m);
        mergeSort(nums, m + 1, e);

        merge(nums, s, m, e);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};