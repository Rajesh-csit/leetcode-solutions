#include <iostream>
using namespace std;

int main() {

    // Test Case 1
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int n1 = 4;

    for (int i = 0; i < n1; i++) {
        for (int j = i + 1; j < n1; j++) {
            if (nums1[i] + nums1[j] == target1) {
                cout << "Test 1 - Indices: " << i << ", " << j << endl;
            }
        }
    }

    // Test Case 2
    int nums2[] = {3, 3};
    int target2 = 6;
    int n2 = 2;

    for (int i = 0; i < n2; i++) {
        for (int j = i + 1; j < n2; j++) {
            if (nums2[i] + nums2[j] == target2) {
                cout << "Test 2 - Indices: " << i << ", " << j << endl;
            }
        }
    }

    return 0;
}