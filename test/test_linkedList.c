#include "unity.h"
#include "linkedList.h"

void setUp(void){}
void tearDown(void){}

void test_is_head_in_initialList_initialize_to_null(void)
{
	TEST_ASSERT_EQUAL(0, initializeList(head, tail));
}

void test_is_tail_in_initialList_initialize_to_null(void)
{
	TEST_ASSERT_EQUAL(0, initializeList(head, tail));
}

void test_pass_2_to_createList_should_not_return_NULL(void)
{
    TEST_ASSERT_NOT_NULL(createList(2));
}

void test_pass_0_to_createList_should_not_return_NULL(void)
{
    TEST_ASSERT_NOT_NULL(createList(0));
}

void test_pass_minus2_to_createList_should_not_return_NULL(void)
{
    TEST_ASSERT_NOT_NULL(createList(0));
}

void test_pass_2_to_insertList_should_return_2(void)
{
    TEST_ASSERT_EQUAL(2, insertList(head, tail, createList(2)));
}

void test_pass_minus2_to_insertList_should_return_minus2(void)
{
    TEST_ASSERT_EQUAL(-2, insertList(head, tail, createList(-2)));
}

void test_pass_0_to_insertList_should_return_0(void)
{
    TEST_ASSERT_EQUAL(0, insertList(head, tail, createList(0)));
}

void test_add_two_numbers_to_insertList(void)
{
    TEST_ASSERT_EQUAL(0, insertList(head, tail, createList(0)));
    TEST_ASSERT_EQUAL(2, insertList(head, tail, createList(2)));
}

void test_add_four_numbers_to_insertList(void)
{
    TEST_ASSERT_EQUAL(0, insertList(head, tail, createList(0)));
    TEST_ASSERT_EQUAL(2, insertList(head, tail, createList(2)));
    TEST_ASSERT_EQUAL(-5, insertList(head, tail, createList(-5)));
    TEST_ASSERT_EQUAL(9, insertList(head, tail, createList(9)));
}

void test_add_eight_numbers_to_insertList(void)
{
    TEST_ASSERT_EQUAL(0, insertList(head, tail, createList(0)));
    TEST_ASSERT_EQUAL(2, insertList(head, tail, createList(2)));
    TEST_ASSERT_EQUAL(-5, insertList(head, tail, createList(-5)));
    TEST_ASSERT_EQUAL(9, insertList(head, tail, createList(9)));
    TEST_ASSERT_EQUAL(0, insertList(head, tail, createList(0)));
    TEST_ASSERT_EQUAL(2, insertList(head, tail, createList(2)));
    TEST_ASSERT_EQUAL(-5, insertList(head, tail, createList(-5)));
    TEST_ASSERT_EQUAL(9, insertList(head, tail, createList(9)));
}


