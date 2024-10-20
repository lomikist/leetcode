#include <vector>
using namespace std;

class Solution {
public:
    void swap_till_end(vector<int>& nums, size_t pos)
    {
        int val = nums[pos];
        while (pos < nums.size() - 1 && nums[pos + 1] != val)
        {
            std::swap(nums[pos], nums[pos + 1]); 
            pos++;
        }  
    }

    int removeDuplicates(vector<int>& nums)
    {
        int k = 0;
        if (nums.size() == 1)
            return 1;
        for(int i = nums.size() - 1; i > 0; --i)
        {
            if (nums[i] == nums[i - 1])
            {
                swap_till_end(nums, i);
                ++k;
            }
        }
        return nums.size() - k;
    }
};
