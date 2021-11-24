#include "unity.h"
#include <tic_tac_toe.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Tic tac toe"

/* Prototypes for all the test functions */
void test_fun_player(void)
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  void test_fun_player(void)

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_fun_player(void) {
  TEST_ASSERT_EQUAL(1, fun_player(5));
  TEST_ASSERT_EQUAL(2, fun_player(2));
  TEST_ASSERT_EQUAL(1, fun_player(11));
  TEST_ASSERT_EQUAL(2, fun_player(8)));
}
