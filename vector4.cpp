//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//template <typename T>
//void printfvector(vector<T>&v) {
//	//��סtypename vector<T>
//	for (typename vector<T>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//void text1() {
//	vector<int> v1;//Ĭ�Ϲ���
//	for (int i = 1; i <=10; i++) {
//		v1.push_back(i);
//	}
//	printfvector(v1);
//	
//	vector<int> v2(v1.begin(), v1.end());//����
//	//��ֵҲ���� v2=v1
//	//��Ҫ
//	printfvector(v2);
//	vector<int> v3(10, 5);
//	//����10��5����
//	printfvector(v3);
//
//	vector<int>v4(v3);
//	printfvector(v4);
//	vector<int> v5;
//	v5.assign(v1.begin(), v1.end());
//	//�����Ϊ���俽����ֵ��v5
//	//����ҿ�
//	vector<int> v6;
//	v6.assign(10, 4);
//	//vectorֻ��assion
//	//string ��assion(��ֵ) append��׷�ӣ�
//	printfvector(v6);
//
//}
//
//int main() {
//	text1();
//	system("pause");
//}