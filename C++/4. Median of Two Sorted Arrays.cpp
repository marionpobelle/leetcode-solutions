class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray;
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), std::back_inserter(mergedArray));
        int masize = mergedArray.size();
        if(masize % 2 == 0)
        {
            return (float)(mergedArray[masize/2] + mergedArray[(masize/2) - 1])/2.;
        }
        else
        {
            return mergedArray[std::floor(masize/2)];
        }
    }
};