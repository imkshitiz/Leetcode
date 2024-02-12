class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
    int majorityElement;
    int n = nums.size();
    
    // Count occurrences of each element
    for (int num : nums) {
        counts[num]++;
        if (counts[num] > n / 2) {
            majorityElement = num;
            break;
        }
    }
    
    return majorityElement;
        
    }
};