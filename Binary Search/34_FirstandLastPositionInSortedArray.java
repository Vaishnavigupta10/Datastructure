class Solution {
  public int[] searchRange(int[] nums, int target) {
      int first = -1, last = -1;

      int start = 0, end = nums.length - 1;
      while (start <= end) {
          int mid = start + (end - start) / 2;
          if (nums[mid] == target) {
              first = findIndex(nums, target, true, start, mid);
              last = findIndex(nums, target, false, mid, end);
              break; 
          } else if (nums[mid] < target) {
              start = mid + 1;
          } else {
              end = mid - 1;
          }
      }

      return new int[]{first, last};
  }

  private int findIndex(int[] nums, int target, boolean findFirst, int start, int end) {
      int index = -1;
      int 
      while (start <= end) {
          int mid = start + (end - start) / 2;
          if (nums[mid] == target) {
              index = mid;
              if (findFirst) {
                  end = mid - 1; 
              } else {
                  start = mid + 1; 
              }
          } else if (nums[mid] < target) {
              start = mid + 1;
          } else {
              end = mid - 1;
          }
      }
      return index;
  }
}
