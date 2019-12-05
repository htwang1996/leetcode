/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        if(n<2){
            return 0;
        }
        if(n == 2){
            return 0;
        }
        int count = 0;
        for(int i =2;i<n;i++){
            bool ip =isprime(i);
            if(ip){
                count++;
            }
        }
        return count;
    }
    bool isprime(int n){
        if (n <= 3) {
            return n > 1;
        }
        int sqrt = mySqrt(n);
        for (int i = 2; i <= sqrt; i++) {
            if(n % i == 0) {
                return false;
            }
        }
        return true;
    }
    int mySqrt(int x) {
        if (x < 1)
            return 0;
        int low = 1;
        int high = x;
        while (low <= high) {
            int mid = (high - low) / 2 + low;
            if (x / mid == mid)
                return mid;
            if (x / mid > mid)
                low = mid + 1;
            if (x / mid < mid)
                high = mid - 1;
        }
        return high;
    }
};
// @lc code=end

