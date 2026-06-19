class Solution {
    public int maxArea(int[] heights) {

        int maximum_water = 0;
        int l = 0, r = heights.length - 1;
        while (l < r && l >= 0 && r <= heights.length - 1) {
            maximum_water = Math.max(maximum_water, Math.min(heights[r], heights[l]) * (r - l));
            if (heights[r] > heights[l]) {
                l++;
            } else {
                r--;
            }
        }

        return maximum_water;
    }
}