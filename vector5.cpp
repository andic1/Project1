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
//	if (v1.empty()) {//为真，说明v为空
//		cout << "空" << endl;
//	}
//	else {
//		cout << "不为空" << endl;
//		cout << "容量：" << v1.capacity() << endl;//容量比实际大小大 1.4倍左右
//		cout << "大小：" << v1.size() << endl;//实际大小，个数
//	}
//	v1.resize(15);//重新指定实际大小
//	//若更大，则其他为0
//	//若更小，舍去后面的元素
//	printfvector(v1);
//
//	v1.resize(3);
//	printfvector(v1);
//
//}
//int main() {
//	text1();
//}