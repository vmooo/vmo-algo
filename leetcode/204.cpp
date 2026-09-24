class Solution {

public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }

        static bitset<static_cast<size_t>(5000002)> bs;

        bs.reset();
        bs[0] = 1;
        bs[1] = 1;

        int ans = 1;
        for(size_t i = 3; i < n; i += 2) {
            if(!bs[i]) {
                ++ans;
                if (i * i < n) {
                    for(size_t j = i * i; j < n; j += 2 * i) {
                        bs[j] = 1;
                    }
                }
            }
        }

        return ans;
    }
};