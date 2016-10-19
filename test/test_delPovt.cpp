#include "delPovt.h"

#include <gtest/gtest.h>

TEST(delPovt, can_del_repeating) {
	TDigits* t = 0;
	for (int i = 0; i < 10; i++) {
		Add(&t, i);
		Add(&t, i);
	}
	TDigits* ts = 0;
	for (int i = 0; i < 10; i++) {
		Add(&ts, i);
	}

	delPovt(&t);

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(t->a, ts->a);
		t = t->next;
		ts = ts->next;
	}
}

TEST(delPovt, can_del_nothing) {
	TDigits* t = 0;
	for (int i = 0; i < 10; i++) {
		Add(&t, i);
	}
	TDigits* ts = 0;
	for (int i = 0; i < 10; i++) {
		Add(&ts, i);
	}

	delPovt(&t);

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(t->a, ts->a);
		t = t->next;
		ts = ts->next;
	}
}

TEST(delPovt, throws_when_list_is_empty) {
	TDigits* t = 0;
	ASSERT_ANY_THROW(delPovt(&t));
}