class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<pair<int, int> > cnt(20004);

        for (auto& el : nums) {
            ++cnt[el + 10000].first;
            cnt[el + 10000].second = el;
        }

        sort(cnt.begin(), cnt.end(), greater<>());

        vector<int> ans;
        for (auto el : cnt) {
            if (k > 0) {
                ans.push_back(el.second);
                --k;
            } else {
                break;
            }
        }

        return ans;
    }
};