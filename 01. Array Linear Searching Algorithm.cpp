#include <iostream>
using namespace std;

int main() {
    int arr[100], size, value, index, count = 0;
    
    cout << "Enter Array Size: ";
    cin >> size;
    
    cout << "Enter " << size << " Array Elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "The Array Elements Are: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Enter the element you want to search for: ";
    cin >> value;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            index = i;
            count++;
            break;
        }
    }
    
    if (count == 1) {
        cout << "The element " << value << " is found at index " << index << "\n";
    } else {
        cout << "Element is not found\n";
    }
    
    return 0;
}
