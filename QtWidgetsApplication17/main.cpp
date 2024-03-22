#include <iostream>
#include <vector>

using namespace std;

//�˴����� Hoare �ָ ʵ��
int partition(vector<int>& arr, int low, int high) {
	int pivot = arr[low + (high - low) / 2]; // ѡ���м�Ԫ����Ϊ��׼ֵ
	int i = low - 1; // ���ָ��
	int j = high + 1; // �ұ�ָ��

	while (true) {
		// �ƶ����ָ��ֱ���ҵ����ڵ��ڻ�׼ֵ��Ԫ��
		do {
			i++;
		} while (arr[i] < pivot);

		// �ƶ��ұ�ָ��ֱ���ҵ�С�ڵ��ڻ�׼ֵ��Ԫ��
		do {
			j--;
		} while (arr[j] > pivot);

		// �������ָ�������򽻲棬�򷵻��ұ�ָ��λ��
		if (i >= j)
			return j;

		// ���򣬽�������ָ����ָ���Ԫ��
		swap(arr[i], arr[j]);
	}
}





//Lomuto �ָ
// �ָ�������ڽ�����ֳ������֣���߲���С�ڻ�׼ֵ���ұ߲��ִ��ڻ�׼ֵ
//int partition(vector<int>& arr, int low, int high) {
//	int pivot = arr[high]; // ѡ�����һ��Ԫ����Ϊ��׼ֵ
//	int i = low - 1; // ��¼С�ڻ�׼ֵ��Ԫ�ص�λ��
//
//	for (int j = low; j < high; j++) {
//		if (arr[j] <= pivot) {
//			i++; // �ƶ�ָ��
//			swap(arr[i], arr[j]); // ����Ԫ�أ���С�ڻ�׼ֵ��Ԫ�طŵ����
//		}
//	}
//	
//	//wgj ���ⲽʱ����ʵi��¼���м���ֵ�Ȼ�׼ֵҪС---
//	swap(arr[i + 1], arr[high]); // ����׼ֵ�ŵ�����λ��
//	return i + 1;
//}

// ����������
void quickSort(vector<int>& arr, int low, int high) {
	if (low < high) {
		// �ָ����飬��ȡ��׼ֵ��λ��
		int pi = partition(arr, low, high);

		// �ݹ������׼ֵ��ߵ�������
		quickSort(arr, low, pi - 1);
		// �ݹ������׼ֵ�ұߵ�������
		quickSort(arr, pi + 1, high);
	}
}

// �����������ں���
void quickSort(vector<int>& arr) {
	int n = arr.size();
	quickSort(arr, 0, n - 1);
}

// ���Կ��������㷨
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
