                //Sort the array of 0’s and 1’s Merge two sorted arrays . (LeetCode -88)

#include <iostream>
#include <vector>

using namespace std;

// Function to sort an array of 0's and 1's
void sortArray(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        while (nums[left] == 0 && left < right) left++;
        while (nums[right] == 1 && left < right) right--;
        if (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
}

// Function to merge two sorted arrays
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    // Example usage
    vector<int> arr1 = {0, 1, 0, 1, 1, 0};
    sortArray(arr1);
    cout << "Sorted array of 0's and 1's: ";
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr2 = {1, 3, 5, 0, 0, 0};
    vector<int> arr3 = {2, 4, 6};
    merge(arr2, 3, arr3, 3);
    cout << "Merged sorted array: ";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

                /*  Output
                    Sorted array of 0's and 1's: 0 0 0 1 1 1 
                    Merged sorted array: 1 2 3 4 5 6 
                */
