#include <iostream>
#include <vector>

using namespace std;

//此代码用 Hoare 分割法 实现
int partition(vector<int>& arr, int low, int high) {
	int pivot = arr[low + (high - low) / 2]; // 选择中间元素作为基准值
	int i = low - 1; // 左边指针
	int j = high + 1; // 右边指针

	while (true) {
		// 移动左边指针直到找到大于等于基准值的元素
		do {
			i++;
		} while (arr[i] < pivot);

		// 移动右边指针直到找到小于等于基准值的元素
		do {
			j--;
		} while (arr[j] > pivot);

		// 如果左右指针相遇或交叉，则返回右边指针位置
		if (i >= j)
			return j;

		// 否则，交换左右指针所指向的元素
		swap(arr[i], arr[j]);
	}
}





//Lomuto 分割法
// 分割函数，用于将数组分成两部分，左边部分小于基准值，右边部分大于基准值
//int partition(vector<int>& arr, int low, int high) {
//	int pivot = arr[high]; // 选择最后一个元素作为基准值
//	int i = low - 1; // 记录小于基准值的元素的位置
//
//	for (int j = low; j < high; j++) {
//		if (arr[j] <= pivot) {
//			i++; // 移动指针
//			swap(arr[i], arr[j]); // 交换元素，将小于基准值的元素放到左边
//		}
//	}
//	
//	//wgj 到这步时：其实i记录了有几个值比基准值要小---
//	swap(arr[i + 1], arr[high]); // 将基准值放到最终位置
//	return i + 1;
//}

// 快速排序函数
void quickSort(vector<int>& arr, int low, int high) {
	if (low < high) {
		// 分割数组，获取基准值的位置
		int pi = partition(arr, low, high);

		// 递归排序基准值左边的子数组
		quickSort(arr, low, pi - 1);
		// 递归排序基准值右边的子数组
		quickSort(arr, pi + 1, high);
	}
}

// 快速排序的入口函数
void quickSort(vector<int>& arr) {
	int n = arr.size();
	quickSort(arr, 0, n - 1);
}

// 测试快速排序算法
int main() {
	vector<int> arr = { 7, 2, 1, 6, 8, 5, 3, 4 };

	cout << "Original array:" << endl;
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;

	quickSort(arr);

	cout << "Sorted array:" << endl;
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;

	return 0;
}
