#include <iostream>

int main() {
    int arr[] = {48, 12, 85, 3, 67, 21, 94, 56, 30, 78, 15, 42, 9, 63, 88, 37, 5, 72, 26, 51};
	int arrlen = sizeof(arr) / 4;
	for (int i = 0; i < arrlen - 1; i++) {
	    for (int j = 0; j < arrlen - i - 1; j++) {
	        if (arr[j] > arr[j + 1]) {
	            int temp = arr[j];
	            arr[j] = arr[j + 1];
	            arr[j + 1] = temp;
	        }
	    }
	}
	for (int i = 0; i < arrlen - 1; i += 1) {
		std::cout << arr[i] << " ";
	}
}
