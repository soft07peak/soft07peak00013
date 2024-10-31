//question 1:#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 56, 12, 89, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest value is: " << largest << endl;
    return 0;
}



//question 2:#include <iostream>
using namespace std;

void insertAtTop(int arr[], int &n, int newItem) {
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newItem;
    n++;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {20, 30, 40, 50}; // Extra space to insert new elements
    int n = 4;  // Current size of array
    int newItem = 10;

    insertAtTop(arr, n, newItem);
    cout << "Array after inserting at top: ";
    printArray(arr, n);
    return 0;
}




//question 3:#include <iostream>
using namespace std;

void insertAtBottom(int arr[], int &n, int newItem) {
    arr[n] = newItem;
    n++;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {20, 30, 40, 50};
    int n = 4;
    int newItem = 60;

    insertAtBottom(arr, n, newItem);
    cout << "Array after inserting at bottom: ";
    printArray(arr, n);
    return 0;
}




//question 4:#include <iostream>
using namespace std;

void insertAtLocation(int arr[], int &n, int newItem, int loc) {
    for (int i = n; i > loc; i--) {
        arr[i] = arr[i - 1];
    }
    arr[loc] = newItem;
    n++;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100] = {20, 30, 40, 50};
    int n = 4;
    int newItem = 25;
    int loc = 2;

    insertAtLocation(arr, n, newItem, loc);
    cout << "Array after inserting at location " << loc << ": ";
    printArray(arr, n);
    return 0;
}





//question 5:
#include <iostream>
using namespace std;

void deleteFromTop(int arr[], int &n) {
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {20, 30, 40, 50};
    int n = 4;

    deleteFromTop(arr, n);
    cout << "Array after deleting from top: ";
    printArray(arr, n);
    return 0;
}




//question 6:#include <iostream>
using namespace std;

void deleteFromBottom(int arr[], int &n) {
    n--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {20, 30, 40, 50};
    int n = 4;

    deleteFromBottom(arr, n);
    cout << "Array after deleting from bottom: ";
    printArray(arr, n);
    return 0;
}



//question 7:
/#include <iostream>
using namespace std;

void deleteFromLocation(int arr[], int &n, int loc) {
    for (int i = loc; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {20, 30, 40, 50};
    int n = 4;
    int loc = 1;

    deleteFromLocation(arr, n, loc);
    cout << "Array after deleting from location " << loc << ": ";
    printArray(arr, n);
    return 0;
}



//question 8:#include <iostream>
using namespace std;

int searchByIndex(int arr[], int n, int index) {
    if (index >= 0 && index < n) {
        return arr[index];
    }
    return -1; // Return -1 if index is invalid
}

int searchByValue(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1; // Return -1 if value is not found
}

int main() {
    int arr[] = {20, 30, 40, 50};
    int n = 4;
    int index = 2;
    int value = 30;

    cout << "Element at index " << index << ": " << searchByIndex(arr, n, index) << endl;
    cout << "Index of value " << value << ": " << searchByValue(arr, n, value) << endl;
    return 0;
}





//question 9:
#include <iostream>
using namespace std;

void updateAtIndex(int arr[], int n, int index, int newValue) {
    if (index >= 0 && index < n) {
        arr[index] = newValue;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {20, 30, 40, 50};
    int n = 4;
    int index = 2;
    int newValue = 60;

    updateAtIndex(arr, n, index, newValue);
    cout << "Array after update: ";
    printArray(arr, n);
    return 0;
}






//question 10:
#include <iostream>
using namespace std;

void addArrays(int arr1[], int arr2[], int result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {1, 2, 3, 4};
    int n = 4;
    int result[4];

    addArrays(arr1, arr2, result, n);
    cout << "Resultant array after addition: ";
    printArray(result, n);
    return 0;
}
