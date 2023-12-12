//#include <iostream>
//using namespace std;
//typedef struct a {
//	int* base;//底
//	int* top;//顶
//	int stacksize;//最大容量
//}sqstack;
//void a(sqstack &s) {
//	s.base = new int[100];//底 首元素 基地址 向后开辟100个
//	s.top = s.base;//把顶放空，初始化0
//	s.stacksize = 100;
//}
//int b(sqstack &s,int &e) {//入栈
//	if (s.top - s.base == 100) return 0;
//	s.top++; 
//	*s.top = e;
//}
//int c(sqstack &s,int &e) {//出栈
//	if (s.top==s.base) { return 0; }
//	s.top--;
//	e = *s.top;//新的栈顶元素
//	return e;
//} 
//int ax(sqstack &s,int n) {//赋值
//	if (s.top - s.base == 100) return 0;
//	for (int a = 0; a < n; a++) {
//		cin >> *s.top;//不可以用endl
//		s.top++;
//	}
//}
//int main() {
//	sqstack s;
//	a(s);
//	ax(s, 4);
//	int e;
//	c(s, e);
//	cout << c(s,e);
//	
//}