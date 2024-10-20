
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::priority_queue<int> a;
        for (auto && i : nums)
            a.push(i);
        while (k-- > 1)
            a.pop();
        return a.top();
    }
};

