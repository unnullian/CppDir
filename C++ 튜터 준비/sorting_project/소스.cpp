#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// 반복된 숫자는 제거하며 랜덤 숫자 생성 후 반환
int* getRandomArr(int size) {		
	srand(time(0));
	int *arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % size + 1;

		if (i > 1) {
			int currentIndex = i;
			int j = 0;
			while (j < size) {
				j++;
				if (arr[currentIndex] == arr[currentIndex - j]) {
					i--;
					continue;
				}
			}
		}
	}
	return arr;
}

int main() {
	int size = 20;
	int *arr = getRandomArr(size);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}


}