#include "delPovt.h"

void delPovt(TDigits** list) {
	if ((*list) == 0)
		throw 0;
	else {
		TDigits* z = *list;

		while (z->next != 0)
		{
			while (z->a == z->next->a)
			{
				z->next = z->next->next;
				if (z->next == 0)
					break;
			}
			if (z->next == 0)
				break;
			else
				z = z->next;
		}
	}
}