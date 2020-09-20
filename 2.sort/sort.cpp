#include "sort.hpp"


void print_vector(const vector<int>& nums){
    for (auto i: nums)
        cout << i << " ";
    cout << endl;
}


void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}


void selection_sort(vector<int>& nums, int n){
    // for i in [0, n-1]:
    //    find minimum_ind
    //    swap a[i], a[min]
    // 注意一点，如果按左闭右闭的原则，i的取值范围应该是[0, n-1], 但因为排序，最后一次循环可以省略
    // 因此变成左闭右开了，也就是[0, n-1)
    int ind;
    for (int i=0; i<n-1; ++i){
        // Initialization
        ind = i;
        // Find min for each loop.
        for (int j=i+1; j<n; ++j)
            if (nums[j] < nums[ind])
                ind = j;
        // swap
        swap(nums[i], nums[ind]);
    }
}


void insertion_sort(vector<int>& nums, int n){
    // 原理：扑克牌，每次从桌子上那一张牌，插进左手
    // 1. 找到位置；2. 插入
    // 二重循环，通过不断交换的方式，避免了找位置再插的问题
    // i -> [1, n-1]
    // j -> [i, 0]
    // 判断条件: j>0 <=> j>=1 and nums[j-1] > nums[j]
    // 注意是且的关系，有一个不满足立即进入下一个循环。
    for(int i=1; i<n; ++i)
        for(int j=i; j>0 && nums[j] < nums[j-1]; --j)
            swap(nums[j], nums[j-1]);
}


void bubble_sort(vector<int>& nums, int n){
    // 原理：i -> [0, n-1]
    //       i=0, j -> [1, n-1]
    //       i=1, j -> [1, n-1-1]
    for (int i=0; i<n; ++i){
        for(int j=1; j<n-i; ++j){
            if (nums[j] < nums[j-1])
                swap(nums[j], nums[j-1]);
        }
    }
}


