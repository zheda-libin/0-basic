#include "binarysearch.hpp"
#include <stdio.h>


int main(){
    int nums[10] = {5, 7, 7, 8, 9, 12, 15, 17, 19, 19};
    // 知识点1: sizeof(指针) 不等于 sizeof(数组名), 二者的结果都是字节数
    // 知识点2: 如果希望得到数据元素个数，记得使用总字节数除以每个字节数
    int length = sizeof(nums) / sizeof(nums[0]);
    int target = 15;
    
    printf("Given array:\n");
    print_nums(nums, length);
    printf("Array length: %d\nTarget value: %d\n\n", length, target);
    
    int index = binarysearch(nums, length, target);
    if (index != -1)
        printf("Find target! index: %d\n", index);
    else  // 易错点，在C语言里面，if/else后面是没有冒号的
        printf("Cannot find.\n");

    return 0;
}
