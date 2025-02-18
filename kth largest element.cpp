#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min-Heap

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop(); 
        }
    }
    
    return minHeap.top(); // Top of the min-heap is the kth largest element
}

int main() {
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    cout << "Kth largest element: " << findKthLargest(nums, k) << endl;

    vector<int> nums2 = {3,2,3,1,2,4,5,5,6};
    k = 4;
    cout << "Kth largest element: " << findKthLargest(nums2, k) << endl;

    return 0;
}
