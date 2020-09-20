#include<iostream>
using namespace std;


int binarysearch(int nums[], int length, int value){
    //  "左闭右闭":
    //      为什么叫左闭右闭？因为每次的搜索范围都是: [low, high]
    //      当搜索mid以后，因为已经检查过mid，因此不用再检查一次，下一次可以直接从
    //      [low, mid-1] 或 [mid+1, high]开始
    int mid, low = 0, high = length-1;
    while(low <= high){
        mid = (low + high) / 2;
        if (nums[mid] == value)
            return mid;
        else if(nums[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


void print_nums(int nums[], int length){
    for(int i=0; i<length; ++i)
        cout << nums[i] << " ";
    cout << endl;
}

