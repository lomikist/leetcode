#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

class Solution
{
public:
    void swap_till_end(std::vector<int>::iterator it, std::vector<int>::iterator end)
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

    int removeDuplicates(vector<int>& nums)
    {
        auto first = nums.begin();
        auto second = std::next(nums.begin());
        auto end = nums.end();
        
        while (second != end)
        {
            if (*first != *second)
            {
                if (second - first == 1)
                    ++second;
                ++first;
            } else if (second - first == 1)
            {
                second++;
            } else if (second - first == 2)
            {
                swap_till_end(second, end);   
                end--;
            }
        }
        return (end - nums.begin());
    } 
};

int main (int argc, char *argv[])
{
    std::vector<int> vector = {1, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5};
    Solution sol;
    std::cout << sol.removeDuplicates(vector) << std::endl;

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));   
    return 0;
}
