#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    template <typename T>
    void swap_till_end(T it, T end)
    {
         if (it == end)
            return;

        auto next = it;
        while (++next != end)
        {
            std::iter_swap(it, next);
            it++;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int min = abs((int)(nums.size() - k));
        int start = k;

        if (min > start) {
            while (min-- > 0) 
            {
                swap_till_end(nums.begin(), nums.end());
            }
        } else 
        {
            while (k-- > 0) 
            {
                swap_till_end(nums.rbegin(), nums.rend());
            }
        }
    }
};
// complexity is n^2 so its not pass last test
