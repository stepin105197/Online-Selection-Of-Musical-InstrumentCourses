#include "unity.h"


	void setUp()
	{	}
	void tearDown()
	{	}

	void test_veena(void)
	{
  		TEST_ASSERT_EQUAL(600, veena());

	}
	void test_violin(void)
	{
	TEST_ASSERT_EQUAL(500,violin());
	}
	void test_chitraveena(void)
	{
	TEST_ASSERT_EQUAL(550,chitraveena());
	}
	void test_flute(void)
	{
	TEST_ASSERT_EQUAL(500,flute());
	}
	void test_saxophone(void)
	{
	TEST_ASSERT_EQUAL(550,saxophone());
	}
	void test_nadaswaram(void)
	{
	TEST_ASSERT_EQUAL(300,nadaswaram());
	}
	void test_mrudangam(void)
	{
	TEST_ASSERT_EQUAL(500,mrudangam());
	}
	void test_tabla(void)
	{
	TEST_ASSERT_EQUAL(500,tabla());
	}
	void test_ghatam(void)
	{
	TEST_ASSERT_EQUAL(500,ghatam());
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_veena);
		RUN_TEST(test_violin);
		RUN_TEST(test_chitraveena);
		RUN_TEST(test_flute);
		RUN_TEST(test_saxophone);
		RUN_TEST(test_nadaswaram);
		RUN_TEST(test_mrudangam);
		RUN_TEST(test_tabla);
		RUN_TEST(test_ghatam);

  		return UNITY_END();
	}


