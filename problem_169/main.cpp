#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        std::unordered_map<int, int> count_map;
        int result = 0;
        int max;

        for (auto i : nums) {
            ++count_map[i];
        } 
        for (auto i : count_map)
        {
            if (i.second > result)
            {
                result = i.second;
                max = i.first;
            }
        }
        return max;
    }
};
