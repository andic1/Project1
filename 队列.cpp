//#include<iostream>
//#include<math.h>
//#define max 100
//using namespace std;
//typedef struct a {
//	int* base;//基地址
//	int front;//头
//	int rear;
//}sqqueue;
//void a(sqqueue &q) {
//	q.base = new int[max];//开100个数据空间
//	q.front = q.rear == 0;
//}
//int b(sqqueue& q) {
//	return abs(q.rear-q.front);//绝对值
//}
//int c(sqqueue& q,int &e) {//入队
//	if ((q.rear + 1) % max == q.front)//m个空间m-1就是满了
//		return 0;
//	q.base[q.rear] = e;
//	q.rear = (q.rear + 1) % max;
//}
//int d(sqqueue& q, int& e) {
//	if (q.front == q.rear) return 0;
//	e = q.base[q.front];
//	q.front = (q.front + 1) % max;
//}
//int main() {
//	sqqueue q;
//}