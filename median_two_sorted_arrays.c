double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    double result;
    
    int n = nums1Size + nums2Size;
    int nums[n];
    
    int current_1 = 0;
    int current_2 = 0;

    for (int i = 0; i < n; ++i)
    {
        int one = (current_1 < nums1Size) ? nums1[current_1] : 1000000;
        int two = (current_2 < nums2Size) ? nums2[current_2] : 1000000;

        if (one > two)
        {
            nums[i] = two;
            current_2++;
        }
        else
        {
            nums[i] = one;
            current_1++;
        }
    }
    
    if (n % 2 != 0)
    {
        result = (double)nums[n / 2];
    }
    else
    {
        result = (double)(nums[n / 2] + nums[n / 2 - 1]) / 2.f;
    }

    
    return result;
}
