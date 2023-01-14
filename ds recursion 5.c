#include <stdio.h>

int binarySearch(int nums[], int low, int high, int target)
{
    if (low > high) {
        return -1;
    }


    int mid = (low + high)/2;
    if (target == nums[mid]) {
        return mid;
    }

    else if (target < nums[mid]) {
        return binarySearch(nums, low, mid - 1, target);
    }

    else {
        return binarySearch(nums, mid + 1, high, target);
    }
}

int main(void)
{
    int nums[] = { 1,3,5,7,8 };
    int target = 5;

    int n = sizeof(nums)/sizeof(nums[0]);

    int low = 0, high = n - 1;
    int index = binarySearch(nums, low, high, target);

    if (index != -1) {
        printf("Element found at index %d", index);
    }
    else {
        printf("Element not found in the array");
    }

    return 0;
}
