#include "Material_Apoio/src/sort.h"
#include "unity.h"
#include "unity_fixture.h"


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
  int b[] = {17, 22};
  TEST_ASSERT_EQUAL(0, sort(b, 2, (char *)"On", COUNTING));
  
}

TEST(Sort, LimiteInferiorFora)
{
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On", COUNTING));
}

TEST(Sort, LimiteSuperiorDentro)
{
  int d[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 15000, 9};
  TEST_ASSERT_EQUAL(0, sort(d, 20, (char *)"On", COUNTING));
}

TEST(Sort, LimiteSuperiorFora)
{
  int e[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 15000, 9, 47};
  TEST_ASSERT_EQUAL(1, sort(e, 21, (char *)"On", COUNTING));
}

TEST(Sort, ValorIntermediarioLength)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On", COUNTING));
}

TEST(Sort, TypeErradoCounting)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On2", COUNTING));
}

TEST(Sort, TestRadixCorreto)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On", RADIX));
}

TEST(Sort, TypeErradoRadix)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"Onlogn", RADIX));
}

TEST(Sort, TestBubbleCorreto)
{
  int d[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 15000, 9};
  TEST_ASSERT_EQUAL(0, sort(d, 20, (char *)"On2", BUBBLE));
}

TEST(Sort, TypeErradoBubble)
{
  int d[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 15000, 9};
  TEST_ASSERT_EQUAL(1, sort(d, 20, (char *)"On", BUBBLE));
}

TEST(Sort, TestInsertionCorreto)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On2", INSERTION));
}

TEST(Sort, TypeErradoInsertion)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"Onlogn", INSERTION));
}

TEST(Sort, TestSelectionCorreto)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"On2", SELECTION));
}

TEST(Sort, TypeErradoSelection)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On", SELECTION));
}

TEST(Sort, TestHeapCorreto)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"Onlogn", HEAP));
}

TEST(Sort, TypeErradoHeap)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On", HEAP));
}

TEST(Sort, TestMergeCorreto)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"Onlogn", MERGE));
}

TEST(Sort, TypeErradoMerge)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On2", MERGE));
}

TEST(Sort, TestQuickCorreto)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(0, sort(a, 10, (char *)"Onlogn", QUICK));
}

TEST(Sort, TypeErradoQuick)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On", QUICK));
}

TEST(Sort, TestDefault)
{
  int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  TEST_ASSERT_EQUAL(1, sort(a, 10, (char *)"On", 9));
}

TEST(Sort, LengthMaiorQueVetor)
{
  int b[] = {17, 22};
  TEST_ASSERT_EQUAL(0, sort(b, 15, (char *)"On", COUNTING));
}

TEST(Sort, LengthMenorQueVetor)
{
  int d[] = {7, 8, 20, 3, 19, 15, 17, 2, 6, 384, 495, 4, 1, 1000, 8945, 5, 0, 1968, 15000, 9};
  TEST_ASSERT_EQUAL(0, sort(d, 2, (char *)"On", COUNTING));
}

TEST(Sort, LimiteSuperiorIntCounting){
  int f[] = {5, 32767, 1, 32766, 8};
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On", COUNTING));
}

TEST(Sort, LimiteSuperiorIntRadix){
  int f[] = {5, 32767, 1, 32766, 8};
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On", RADIX));
}

TEST(Sort, LimiteSuperiorIntBubble){
  int f[] = {5, 32767, 1, 32766, 8};
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, LimiteSuperiorIntInsertion){
  int f[] = {5, 32767, 1, 32766, 8};
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On2", INSERTION));
}

TEST(Sort, LimiteSuperiorIntSelection){
  int f[] = {5, 32767, 1, 32766, 8};
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"On2", SELECTION));
}

TEST(Sort, LimiteSuperiorIntHeap){
  int f[] = {5, 32767, 1, 32766, 8};
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, LimiteSuperiorIntMerge){
  int f[] = {5, 32767, 1, 32766, 8};
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, LimiteSuperiorIntQuick){
  int f[] = {5, 32767, 1, 32766, 8};
  TEST_ASSERT_EQUAL(0, sort(f, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, LimiteInferiorIntCounting){
  int g[] = {-5, -32768, -1, -32767, -8};
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On", COUNTING));
}

TEST(Sort, LimiteInferiorIntRadix){
  int g[] = {-5, -32768, -1, -32767, -8};
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On", RADIX));
}

TEST(Sort, LimiteInferiorIntBubble){
  int g[] = {-5, -32768, -1, -32767, -8};
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, LimiteInferiorIntInsertion){
  int g[] = {-5, -32768, -1, -32767, -8};
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On2", INSERTION));
}

TEST(Sort, LimiteInferiorIntSelection){
  int g[] = {-5, -32768, -1, -32767, -8};
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"On2", SELECTION));
}

TEST(Sort, LimiteInferiorIntHeap){
  int g[] = {-5, -32768, -1, -32767, -8};
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, LimiteInferiorIntMerge){
  int g[] = {-5, -32768, -1, -32767, -8};
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, LimiteInferiorIntQuick){
  int g[] = {-5, -32768, -1, -32767, -8};
  TEST_ASSERT_EQUAL(0, sort(g, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ForaLimitesIntCounting){
  int h[] = {32769, 0, 32768, -32770, -32769};
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On", COUNTING));
}

TEST(Sort, ForaLimitesIntRadix){
  int h[] = {32769, 0, 32768, -32770, -32769};
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On", RADIX));
}

TEST(Sort, ForaLimitesIntBubble){
  int h[] = {32769, 0, 32768, -32770, -32769};
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ForaLimitesIntInsertion){
  int h[] = {32769, 0, 32768, -32770, -32769};
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ForaLimitesIntSelection){
  int h[] = {32769, 0, 32768, -32770, -32769};
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ForaLimitesIntHeap){
  int h[] = {32769, 0, 32768, -32770, -32769};
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ForaLimitesIntMerge){
  int h[] = {32769, 0, 32768, -32770, -32769};
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ForaLimitesIntQuick){
  int h[] = {32769, 0, 32768, -32770, -32769};
  TEST_ASSERT_EQUAL(0, sort(h, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ValorMeioIntCounting){
  int i[] = {15000, 5, 2, 4, -15000};
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On", COUNTING));
}

TEST(Sort, ValorMeioIntRadix){
  int i[] = {15000, 5, 2, 4, -15000};
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On", RADIX));
}

TEST(Sort, ValorMeioIntBubble){
  int i[] = {15000, 5, 2, 4, -15000};
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ValorMeioIntInsertion){
  int i[] = {15000, 5, 2, 4, -15000};
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ValorMeioIntSelection){
  int i[] = {15000, 5, 2, 4, -15000};
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ValorMeioIntHeap){
  int i[] = {15000, 5, 2, 4, -15000};
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ValorMeioIntMerge){
  int i[] = {15000, 5, 2, 4, -15000};
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ValorMeioIntQuick){
  int i[] = {15000, 5, 2, 4, -15000};
  TEST_ASSERT_EQUAL(0, sort(i, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaVaziaCounting){
  int j[] = {};
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On", COUNTING));
}

TEST(Sort, ListaVaziaRadix){
  int j[] = {};
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On", RADIX));
}

TEST(Sort, ListaVaziaBubble){
  int j[] = {};
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaVaziaInsertion){
  int j[] = {};
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On2", INSERTION));
}

TEST(Sort, ListaVaziaSelection){
  int j[] = {};
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On2", SELECTION));
}

TEST(Sort, ListaVaziaHeap){
  int j[] = {};
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaVaziaMerge){
  int j[] = {};
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaVaziaQuick){
  int j[] = {};
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaComUmaEntradaCounting){
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On", COUNTING));
}

TEST(Sort, ListaComUmaEntradaRadix){
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On", RADIX));
}

TEST(Sort, ListaComUmaEntradaBubble){
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaComUmaEntradaInsertion){
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On2", INSERTION));
}

TEST(Sort, ListaComUmaEntradaSelection){
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On2", SELECTION));
}

TEST(Sort, ListaComUmaEntradaHeap){
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaComUmaEntradaMerge){
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaComUmaEntradaQuick){
  int c[] = {13};
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaComValorRepetidoCounting){
  int l[] = {32000, 0, 0, 32000, 74};
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaComValorRepetidoRadix){
  int l[] = {32000, 0, 0, 32000, 74};
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaComValorRepetidoBubble){
  int l[] = {32000, 0, 0, 32000, 74};
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaComValorRepetidoInsertion){
  int l[] = {32000, 0, 0, 32000, 74};
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaComValorRepetidoSelection){
  int l[] = {32000, 0, 0, 32000, 74};
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaComValorRepetidoHeap){
  int l[] = {32000, 0, 0, 32000, 74};
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaComValorRepetidoMerge){
  int l[] = {32000, 0, 0, 32000, 74};
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaComValorRepetidoQuick){
  int l[] = {32000, 0, 0, 32000, 74};
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaComValorUnicoCounting){
  int m[] = {150, 150, 150, 150, 150};
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaComValorUnicoRadix){
  int m[] = {150, 150, 150, 150, 150};
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaComValorUnicoBubble){
  int m[] = {150, 150, 150, 150, 150};
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaComValorUnicoInsertion){
  int m[] = {150, 150, 150, 150, 150};
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaComValorUnicoSelection){
  int m[] = {150, 150, 150, 150, 150};
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaComValorUnicoHeap){
  int m[] = {150, 150, 150, 150, 150};
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaComValorUnicoMerge){
  int m[] = {150, 150, 150, 150, 150};
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaComValorUnicoQuick){
  int m[] = {150, 150, 150, 150, 150};
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaOrdenadaCounting){
  int n[] = {0, 1, 2, 3, 4};
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaOrdenadaRadix){
  int n[] = {0, 1, 2, 3, 4};
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaOrdenadaBubble){
  int n[] = {0, 1, 2, 3, 4};
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaOrdenadaInsertion){
  int n[] = {0, 1, 2, 3, 4};
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaOrdenadaSelection){
  int n[] = {0, 1, 2, 3, 4};
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaOrdenadaHeap){
  int n[] = {0, 1, 2, 3, 4};
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaOrdenadaMerge){
  int n[] = {0, 1, 2, 3, 4};
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaOrdenadaQuick){
  int n[] = {0, 1, 2, 3, 4};
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaComValorNegativoCounting){
  int o[] = {2164, -3200, -4531, 513, 846};
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaComValorNegativoRadix){
  int o[] = {2164, -3200, -4531, 513, 846};
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaComValorNegativoBubble){
  int o[] = {2164, -3200, -4531, 513, 846};
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaComValorNegativoInsertion){
  int o[] = {2164, -3200, -4531, 513, 846};
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaComValorNegativoSelection){
  int o[] = {2164, -3200, -4531, 513, 846};
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaComValorNegativoHeap){
  int o[] = {2164, -3200, -4531, 513, 846};
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaComValorNegativoMerge){
  int o[] = {2164, -3200, -4531, 513, 846};
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaComValorNegativoQuick){
  int o[] = {2164, -3200, -4531, 513, 846};
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaTodaNegativaCounting){
  int p[] = {-357, -5192, -14386, -1, -384};
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaTodaNegativaRadix){
  int p[] = {-357, -5192, -14386, -1, -384};
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaTodaNegativaBubble){
  int p[] = {-357, -5192, -14386, -1, -384};
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaTodaNegativaInsertion){
  int p[] = {-357, -5192, -14386, -1, -384};
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaTodaNegativaSelection){
  int p[] = {-357, -5192, -14386, -1, -384};
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaTodaNegativaHeap){
  int p[] = {-357, -5192, -14386, -1, -384};
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaTodaNegativaMerge){
  int p[] = {-357, -5192, -14386, -1, -384};
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaTodaNegativaQuick){
  int p[] = {-357, -5192, -14386, -1, -384};
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"Onlogn", QUICK));
}
