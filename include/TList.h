#ifndef _LIST_
#define _LIST_

struct TDigits {
	int a;
	TDigits* next;
};

void Add(TDigits** list, int a);
#endif