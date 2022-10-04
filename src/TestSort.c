#include "Material_Apoio/src/sort.h"
#include "unity.h"
#include "unity_fixture.h"

int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
int b[] = {17, 22};
int c[] = {13};
int d[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 15000, 9};
int e[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 15000, 9, 47};
int f[] = {5, 32767, 1, 32766, 8};
int g[] = {-5, -32768, -1, -32767, -8};
int h[] = {32769, 0, 32768, -32770, -32769};
int i[] = {15987, -15987, -267, 267, 0};

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

TEST(Sort, LimiteSuperiorIntCounting){
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On", COUNTING));
}

TEST(Sort, LimiteSuperiorIntRadix){
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On", RADIX));
}

TEST(Sort, LimiteSuperiorIntBubble){
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, LimiteSuperiorIntInsertion){
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On2", INSERTION));
}

TEST(Sort, LimiteSuperiorIntSelection){
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On2", SELECTION));
}

TEST(Sort, LimiteSuperiorIntHeap){
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, LimiteSuperiorIntMerge){
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, LimiteSuperiorIntQuick){
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, LimiteInferiorIntCounting){
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On", COUNTING));
}

TEST(Sort, LimiteInferiorIntRadix){
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On", RADIX));
}

TEST(Sort, LimiteInferiorIntBubble){
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, LimiteInferiorIntInsertion){
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On2", INSERTION));
}

TEST(Sort, LimiteInferiorIntSelection){
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On2", SELECTION));
}

TEST(Sort, LimiteInferiorIntHeap){
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, LimiteInferiorIntMerge){
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, LimiteInferiorIntQuick){
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ForaLimitesIntCounting){
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On", COUNTING));
}

TEST(Sort, ForaLimitesIntRadix){
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On", RADIX));
}

TEST(Sort, ForaLimitesIntBubble){
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ForaLimitesIntInsertion){
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ForaLimitesIntSelection){
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ForaLimitesIntHeap){
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ForaLimitesIntMerge){
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ForaLimitesIntQuick){
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ValorMeioIntCounting){
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On", COUNTING));
}

TEST(Sort, ValorMeioIntRadix){
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On", RADIX));
}

TEST(Sort, ValorMeioIntBubble){
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ValorMeioIntInsertion){
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ValorMeioIntSelection){
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ValorMeioIntHeap){
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ValorMeioIntMerge){
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ValorMeioIntQuick){
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"Onlogn", QUICK));
}
