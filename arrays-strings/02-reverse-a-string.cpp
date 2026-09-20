#include <iostream>
#include <string>
using namespace std;

int main() {

    // Test Case 1
    string str1 = "hello";

    int left = 0;
    int right = str1.length() - 1;

    while (left < right) {
        swap(str1[left], str1[right]);
        left++;
        right--;
    }

    cout << "Test 1: " << str1 << endl;

    // Test Case 2
    string str2 = "abcd";

    left = 0;
    right = str2.length() - 1;

    while (left < right) {
        swap(str2[left], str2[right]);
        left++;
        right--;
    }

    cout << "Test 2: " << str2 << endl;

    return 0;
}