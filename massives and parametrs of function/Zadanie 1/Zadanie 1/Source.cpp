#include <iostream>

void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10, 6, 3, 7, 3, 1 };
	int c[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	print(a, 5);
	print(b, 10);
	print(c, 5);

	return 0;
}