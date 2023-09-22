class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result = __builtin_popcount(start^goal);
        return result;
    }
};