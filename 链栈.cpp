//#include<iostream>
//using namespace std;
//typedef struct a {
//	int data;
//	struct a* next;
//}stacknode,*linkstack;
//void a(linkstack &s) {//��ʼ��������ͷ�ڵ㣬
//	s = NULL;//ջ��ָ���ÿ�
//}
//void b(linkstack& s, int& e) {//��ջ
//	linkstack p = new stacknode;
//	p->data = e;
//	p->next = s;
//	s = p;
//}
//int c(linkstack& s,int &e) {
//	if (s == NULL) return 0;
//	e = s->data;
//	linkstack &p = s;//�������Ե����ſգ�������
//	s = s->next;
//	delete p;//��ָ���Ҫ�ͷ��ڴ�
//}
//int main() {
//	linkstack s;
//}
