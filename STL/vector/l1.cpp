#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(6);
    nums.push_back(0);
    nums.push_back(5);
    int left = 0, right = nums.size() - 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[left] < nums[right])
            left++;
        else if (nums[left] > nums[right])
            right--;
        if (left == right)
            break;
    }
    cout << nums[left];
    // for (auto i : nums)
    // {
    //     cout << i << " ";
    // }
    return 0;
}