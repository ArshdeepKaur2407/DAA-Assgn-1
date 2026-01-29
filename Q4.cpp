// 4. You are given a 1D array that may contain both positive and negative integers, and find
// the sum of a contiguous subarray of numbers which has the largest sum. For example, if
// the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.

int maxCrossingSum(int arr[], int left, int mid, int right) {
    int sum = 0;
    int leftSum = -100000;

    for (int i = mid; i >= left; i--) {
        sum += arr[i];
        if (sum > leftSum)
            leftSum = sum;
    }

    sum = 0;
    int rightSum = -100000;

    for (int i = mid + 1; i <= right; i++) {
        sum += arr[i];
        if (sum > rightSum)
            rightSum = sum;
    }

    return leftSum + rightSum;
}

int maxSubArraySum(int arr[], int left, int right) {
    if (left == right)
        return arr[left];

    int mid = (left + right) / 2;

    int leftMax = maxSubArraySum(arr, left, mid);
    int rightMax = maxSubArraySum(arr, mid + 1, right);
    int crossMax = maxCrossingSum(arr, left, mid, right);

    return max(leftMax, max(rightMax, crossMax));
} 
Time Complexity
•	O(n log n)
Space Complexity
•	O(log n) (recursion stack)
