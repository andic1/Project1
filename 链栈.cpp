//#include<iostream>
//using namespace std;
//typedef struct a {
//	int data;
//	struct a* next;
//}stacknode,*linkstack;
//void a(linkstack &s) {//初始化，不用头节点，
//	s = NULL;//栈顶指针置空
//}
//void b(linkstack& s, int& e) {//入栈
//	linkstack p = new stacknode;
//	p->data = e;
//	p->next = s;
//	s = p;
//}
//int c(linkstack& s,int &e) {
//	if (s == NULL) return 0;
//	e = s->data;
//	linkstack &p = s;//这样可以单个放空！！！！
//	s = s->next;
//	delete p;//有指针就要释放内存
//}
//int main() {
//	linkstack s;
//}
