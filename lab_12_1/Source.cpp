#include <iostream>
using namespace std;
struct Elem
{
	Elem* link1,
		* link2;
	int info;
};
int main()
{
	Elem* p;
	p = new Elem; // 1
	p->info = 1; // 2
	p->link2 = NULL; // 3
	p->link1 = new Elem; // 4
	p->link1->info = 2; // 5
	p->link1->link1 = new Elem; // 6
	p->link1->link1->info = 4; // 7
	p->link2 = new Elem; // 8
	p->link2->link2 = NULL;// 9
	p->link2->info = 3; // 10
	p->link1->link1 = p; // 11
	p->link1->link1 = p->link1; // 12
	p->link1->link1->link2 = p->link2; //13
	return 0;
}