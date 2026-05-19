// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
    public int maximumScore(int[] nums, int k) {
        int n = nums.length;
        int i = k;
        int j = k;
        
        int currentMin = nums[k];
        int maxScore = nums[k];  
        while (i > 0 || j < n - 1) {
            if (i == 0) {
                j++;
            } else if (j == n - 1) {
                i--;
            } else if (nums[i - 1] > nums[j + 1]) {
                i--;
            } else {
                j++;
            }
            
            currentMin = Math.min(currentMin, Math.min(nums[i], nums[j]));
            maxScore = Math.max(maxScore, currentMin * (j - i + 1));
        }
        
        return maxScore;
    }
}