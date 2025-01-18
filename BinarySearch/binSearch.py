
def binarySearch(nums: [int], target: int):
    n = len(nums)  # size of the array
    low = 0
    high = n - 1

    # Perform the steps:
    while low <= high:
        mid = (low + high) // 2
        if nums[mid] == target:
            return mid
        elif target > nums[mid]:
            low = mid + 1
        else:
            high = mid - 1
    return -1

if __name__ == "__main__":
    a = [3, 4, 6, 7, 9, 12, 16, 17]
    target = 6
    ind = binarySearch(a, target)
    if ind == -1:
        print("The target is not present.")
    else:
        print("The target is at index:", ind)

