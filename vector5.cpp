//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//void printfvector(vector<int>& v) {
//	
//		for ( vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//			cout << (*it) << " ";
//		}
//		cout << endl;
//	}
//void text1() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printfvector(v1);
//	if (v1.empty()) {//Ϊ�棬˵��vΪ��
//		cout << "��" << endl;
//	}
//	else {
//		cout << "��Ϊ��" << endl;
//		cout << "������" << v1.capacity() << endl;//������ʵ�ʴ�С�� 1.4������
//		cout << "��С��" << v1.size() << endl;//ʵ�ʴ�С������
//	}
//	v1.resize(15);//����ָ��ʵ�ʴ�С
//	//������������Ϊ0
//	//����С����ȥ�����Ԫ��
//	printfvector(v1);
//
//	v1.resize(3);
//	printfvector(v1);
//
//}
//int main() {
//	text1();
//}