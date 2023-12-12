//#include<iostream>
//#include<string>
//using namespace std;
//
//template <typename T>
//void swapp(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template <typename T>
//void mysort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int maxIndex = i;
//		for (int j = i; j < len; j++) {
//			if (arr[j] > arr[maxIndex]) {
//				maxIndex = j;
//			}
//		}
//		if (maxIndex != i) {
//			swapp(arr[i], arr[maxIndex]);
//		}
//	}
//}
//
//void text1() {
//	char arr1[] = "sfuisehiuh";
//	int n = sizeof(arr1) / sizeof(char);
//	mysort(arr1, n);
//	for (int a = 0; a < n; a++) {
//		cout << arr1[a] << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	text1();
//	return 0;
//}