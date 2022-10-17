#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> umap;
        vector<int> temp;

        for(int i = 0; i < nums.size(); i++)
        {
            int second_element = target - nums[i];
            if (umap.find(second_element) != umap.end())
            {
                temp.push_back(umap[second_element]);
                temp.push_back(i);
                return temp;
            }
            umap.insert(make_pair(nums[i], i));
        }


        return temp;
    }
};

int main()
{
    return 0;
}