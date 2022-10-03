#include "Material_Apoio/src/sort.h"
#include "unity.h"
#include "unity_fixture.h"

int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
int b[] = {17, 22};
int c[] = {13};
int d[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 98746, 9};
int e[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 98746, 9, 47};
// int length = sizeof(a) / sizeof(int);

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, LimiteInferiorDentro)
{
  TEST_ASSERT_EQUAL(0, sort(b, 2, (char *)"On", COUNTING));
}

TEST(Sort, LimiteInferiorFora)
{
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On", COUNTING));
}

TEST(Sort, LimiteSuperiorDentro)
{
  TEST_ASSERT_EQUAL(0, sort(d, 20, (char *)"On", COUNTING));
}

TEST(Sort, LimiteSuperiorFora)
{
  TEST_ASSERT_EQUAL(1, sort(e, 21, (char *)"On", COUNTING));
}

TEST(Sort, ValorIntermediarioLength)
{
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On", COUNTING));
}

TEST(Sort, TypeErradoCounting)
{
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On2", COUNTING));
}

TEST(Sort, TestRadixCorreto)
{
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On", RADIX));
}

TEST(Sort, TypeErradoRadix)
{
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"Onlogn", RADIX));
}

TEST(Sort, TestBubbleCorreto)
{
  TEST_ASSERT_EQUAL(0, sort(d, 20, (char *)"On2", BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On2", BUBBLE));
  TEST_ASSERT_EQUAL(0, sort(b, 2, (char *)"On2", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On2", BUBBLE));
  TEST_ASSERT_EQUAL(1, sort(e, 21, (char *)"On2", BUBBLE));
}

TEST(Sort, TypeErradoBubble)
{
  TEST_ASSERT_EQUAL(1, sort(d, 20, (char *)"On", BUBBLE));
}

TEST(Sort, TestInsertionCorreto)
{
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On2", INSERTION));
}

TEST(Sort, TypeErradoInsertion)
{
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"Onlogn", INSERTION));
}

TEST(Sort, TestSelectionCorreto)
{
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On2", SELECTION));
}

TEST(Sort, TypeErradoSelection)
{
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On", SELECTION));
}

TEST(Sort, TestHeapCorreto)
{
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"Onlogn", HEAP));
}

TEST(Sort, TypeErradoHeap)
{
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On", HEAP));
}

TEST(Sort, TestMergeCorreto)
{
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"Onlogn", MERGE));
}

TEST(Sort, TypeErradoMerge)
{
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On2", MERGE));
}

TEST(Sort, TestQuickCorreto)
{
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"Onlogn", QUICK));
}

TEST(Sort, TypeErradoQuick)
{
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On", QUICK));
}

TEST(Sort, TestDefault)
{
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On", 9));
}

TEST(Sort, LengthMaiorQueVetor)
{
  TEST_ASSERT_EQUAL(0, sort(b, 15, (char *)"On", COUNTING));
}

TEST(Sort, LengthMenorQueVetor)
{
  TEST_ASSERT_EQUAL(0, sort(d, 2, (char *)"On", COUNTING));
}