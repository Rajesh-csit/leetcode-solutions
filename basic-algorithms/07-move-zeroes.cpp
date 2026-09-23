#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int j = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

void print(vector<int>& nums)
{
    for(int x : nums)
        cout << x << " ";

    cout << endl;
}

int main()
{
    vector<int> nums1 = {0, 1, 0, 3, 12};
    vector<int> nums2 = {0};

    moveZeroes(nums1);
    moveZeroes(nums2);

    print(nums1);
    print(nums2);

    return 0;
}