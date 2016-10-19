#include "delN.h"

void delN(TDigits** list, int N) {
	if ((*list) == 0)
		throw 0;
	else {
		int a = 1;
		TDigits *z = *list;
		while (z->next != 0) {
			z = z->next;
			a++;
		}
		if (a >= N)
		{
			int b = a - N, k = 0;
			if (b > 0) {
				z = *list;
				while (k != b - 1) {
					z = z->next;
					k++;
				}
				z->next = z->next->next;
			}
			else
				(*list) = (*list)->next;
		}
		else
			throw 1;
	}
}