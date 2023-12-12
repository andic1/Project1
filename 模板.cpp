//#include<iostream>
//#include<string>
//using namespace std;
//int ax(int a, int b) {//在函数里面写就不可以返回
//	return a + b;
//}
//template <typename T>
//T ax2( T a,   T b) {//&是在这个函数中可以改动，但是这个函数没有改，直接就返回
//	return a + b;//如果用&，就const T &a 因为ax2中没有改动所以是const
//}
//void text1() {
//	int a = 12;
//	int b = 23;
//	char c = 'w';
//	ax(a, b);
//	//ax2(a, c); 不可以, 自动类型不会自动转换
//	ax2<int>(a, c);//但是显示指定类型就可以转换
//	cout << a+b<<endl;
//	cout << a + c << endl;
//}
//int main() {
//	text1();
//}