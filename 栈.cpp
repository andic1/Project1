//#include <iostream>
//using namespace std;
//typedef struct a {
//	int* base;//��
//	int* top;//��
//	int stacksize;//�������
//}sqstack;
//void a(sqstack &s) {
//	s.base = new int[100];//�� ��Ԫ�� ����ַ ��󿪱�100��
//	s.top = s.base;//�Ѷ��ſգ���ʼ��0
//	s.stacksize = 100;
//}
//int b(sqstack &s,int &e) {//��ջ
//	if (s.top - s.base == 100) return 0;
//	s.top++; 
//	*s.top = e;
//}
//int c(sqstack &s,int &e) {//��ջ
//	if (s.top==s.base) { return 0; }
//	s.top--;
//	e = *s.top;//�µ�ջ��Ԫ��
//	return e;
//} 
//int ax(sqstack &s,int n) {//��ֵ
//	if (s.top - s.base == 100) return 0;
//	for (int a = 0; a < n; a++) {
//		cin >> *s.top;//��������endl
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