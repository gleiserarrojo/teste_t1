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
int j[] = {};
int l[] = {32000, 0, 0, 32000, 74};
int m[] = {150, 150, 150, 150, 150};
int n[] = {0, 1, 2, 3, 4};
int o[] = {2164, -3200, -4531, 513, 846};
int p[] = {-357, -5192, -14386, -1, -384};

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

TEST(Sort, ListaVaziaCounting){
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On", COUNTING));
}

TEST(Sort, ListaVaziaRadix){
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On", RADIX));
}

TEST(Sort, ListaVaziaBubble){
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaVaziaInsertion){
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On2", INSERTION));
}

TEST(Sort, ListaVaziaSelection){
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"On2", SELECTION));
}

TEST(Sort, ListaVaziaHeap){
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaVaziaMerge){
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaVaziaQuick){
  TEST_ASSERT_EQUAL(1, sort(j, 0, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaComUmaEntradaCounting){
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On", COUNTING));
}

TEST(Sort, ListaComUmaEntradaRadix){
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On", RADIX));
}

TEST(Sort, ListaComUmaEntradaBubble){
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaComUmaEntradaInsertion){
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On2", INSERTION));
}

TEST(Sort, ListaComUmaEntradaSelection){
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"On2", SELECTION));
}

TEST(Sort, ListaComUmaEntradaHeap){
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaComUmaEntradaMerge){
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaComUmaEntradaQuick){
  TEST_ASSERT_EQUAL(1, sort(c, 1, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaComValorRepetidoCounting){
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaComValorRepetidoRadix){
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaComValorRepetidoBubble){
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaComValorRepetidoInsertion){
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaComValorRepetidoSelection){
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaComValorRepetidoHeap){
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaComValorRepetidoMerge){
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaComValorRepetidoQuick){
  TEST_ASSERT_EQUAL(0, sort(l, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaComValorUnicoCounting){
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaComValorUnicoRadix){
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaComValorUnicoBubble){
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaComValorUnicoInsertion){
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaComValorUnicoSelection){
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaComValorUnicoHeap){
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaComValorUnicoMerge){
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaComValorUnicoQuick){
  TEST_ASSERT_EQUAL(0, sort(m, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaOrdenadaCounting){
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaOrdenadaRadix){
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaOrdenadaBubble){
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaOrdenadaInsertion){
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaOrdenadaSelection){
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaOrdenadaHeap){
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaOrdenadaMerge){
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaOrdenadaQuick){
  TEST_ASSERT_EQUAL(0, sort(n, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaComValorNegativoCounting){
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaComValorNegativoRadix){
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaComValorNegativoBubble){
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaComValorNegativoInsertion){
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaComValorNegativoSelection){
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaComValorNegativoHeap){
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaComValorNegativoMerge){
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaComValorNegativoQuick){
  TEST_ASSERT_EQUAL(0, sort(o, 5, (char *)"Onlogn", QUICK));
}

TEST(Sort, ListaTodaNegativaCounting){
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On", COUNTING));
}

TEST(Sort, ListaTodaNegativaRadix){
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On", RADIX));
}

TEST(Sort, ListaTodaNegativaBubble){
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On2", BUBBLE));
}

TEST(Sort, ListaTodaNegativaInsertion){
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On2", INSERTION));
}

TEST(Sort, ListaTodaNegativaSelection){
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"On2", SELECTION));
}

TEST(Sort, ListaTodaNegativaHeap){
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"Onlogn", HEAP));
}

TEST(Sort, ListaTodaNegativaMerge){
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"Onlogn", MERGE));
}

TEST(Sort, ListaTodaNegativaQuick){
  TEST_ASSERT_EQUAL(0, sort(p, 5, (char *)"Onlogn", QUICK));
}
