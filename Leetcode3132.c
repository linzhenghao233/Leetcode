int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int minimumAddedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    
    for(int i = 2; i > 0; i--){
        int x = nums2[0] - nums1[i];
        int j = 0;
        
        for(int k = i; k < nums1Size; k++){
            if(nums2[j] == nums1[k] + x && ++j == nums2Size)
                return x;
        }
    }
    
    return nums2[0] - nums1[0];
}
