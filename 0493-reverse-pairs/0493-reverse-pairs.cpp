class Solution {
public:
    int cnt = 0;

    void merge(vector<int>& nums, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        vector<int> temp;

        while(left <= mid && right <= high) {
            if(nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while(right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for(int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    int reverse_pair(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        int count = 0;

        for(int i = low; i <= mid; i++) {
            while(right <= high && nums[i] > 2LL * nums[right]) {
                right++;
            }

            count += right - (mid + 1);
        }

        return count;
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if(low >= high) return;

        int mid = low + (high - low) / 2;

        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);

        cnt += reverse_pair(nums, low, mid, high);

        merge(nums, low, mid, high);
    }

    int reversePairs(vector<int>& nums) {
        cnt = 0;
        mergeSort(nums, 0, nums.size() - 1);
        return cnt;
    }
};