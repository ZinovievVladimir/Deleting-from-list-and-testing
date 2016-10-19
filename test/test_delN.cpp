#include "delN.h"

#include <gtest/gtest.h>

TEST(delN, can_delete_last_elem)
{
	TDigits* t = 0;
	for (int i = 0; i < 10; i++) {
		Add(&t, i);
	}
	TDigits* ts = 0;
	for (int i = 0; i < 9; i++) {
		Add(&ts, i);
	}

	delN(&t, 1);

	for (int i = 0; i < 9; i++)
	{
		EXPECT_EQ(t->a, ts->a);
		t = t->next;
		ts = ts->next;
	}
}

TEST(delN, throws_when_del_too_large_obj) {
	TDigits* t = 0;
	for (int i = 0; i < 10; i++) {
		Add(&t, i);
	}
	ASSERT_ANY_THROW(delN(&t, 12););
}

TEST(delN, throws_when_list_is_empty) {
	TDigits* t = 0;
	ASSERT_ANY_THROW(delN(&t, 1););
}

TEST(delN, can_del_1_elem) {
	TDigits* t =0;
	Add(&t, 1);

	delN(&t, 1);

	EXPECT_EQ(0,t);
}