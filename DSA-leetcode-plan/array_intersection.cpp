
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> vec;
        // sort both arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        // rabbit and tortoise
        int rab = 0;
        int tort = 0;

        while (rab < nums1.size() && tort < nums2.size())
        {
            if (nums1[rab] == nums2[tort])
            {
                vec.push_back(nums1[rab]);
                rab++;
                tort++;
            }
            else if (nums1[rab] < nums2[tort])
            {
                rab++;
            }
            else if (nums1[rab] > nums2[tort])
            {
                tort++;
            }
        }

        return vec;
    }
};