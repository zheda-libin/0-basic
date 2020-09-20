#include "sort.hpp"
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> nums = {1, 3, 5, 7, 2, 6, 4, 7, 9, 2, 8, 7, 6, 0, 3, 5, 9, 4, 1, 0};
    // 1. STL Default sorting.
    vector<int> v1(nums);
    cout << "STL Default sort:" << endl;
    print_vector(v1);
    sort(v1.begin(), v1.end());
    print_vector(v1);
    for(int i=0; i<40; ++i)  
        cout << "-";
    cout << endl;
    

    // 2.
    vector<int> v2(nums);
    cout << "Selection sort:" << endl;
    print_vector(v2);
    selection_sort(v2, nums.size());
    print_vector(v2);
    for(int i=0; i<40; ++i)  
        cout << "-";
    cout << endl;
    
    // 3.
    return 0;
}
