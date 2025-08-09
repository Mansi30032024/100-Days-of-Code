class Solution {
public:
  bool isPowerOfTwo(int n) {
     if (n == 1) return true;
    if (n <= 0 || n % 2 != 0) return false;
    return isPowerOfTwo(n / 2);
}
};
//TC:O(log n)
//SC:O(log n) for recursion stack

// return n > 0 && (n & (n - 1)) == 0;
//TC:O(1)
//SC:O(1)