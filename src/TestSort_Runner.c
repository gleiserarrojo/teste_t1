#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, LimiteInferiorDentro);
  RUN_TEST_CASE(Sort, LimiteInferiorFora);
  RUN_TEST_CASE(Sort, LimiteSuperiorDentro);
  RUN_TEST_CASE(Sort, LimiteSuperiorFora);
  RUN_TEST_CASE(Sort, ValorIntermediarioLength);
  RUN_TEST_CASE(Sort, TypeErradoCounting);
  RUN_TEST_CASE(Sort, TestRadixCorreto);
  RUN_TEST_CASE(Sort, TypeErradoRadix);
  RUN_TEST_CASE(Sort, TestBubbleCorreto);
  RUN_TEST_CASE(Sort, TypeErradoBubble);
  RUN_TEST_CASE(Sort, TestInsertionCorreto);
  RUN_TEST_CASE(Sort, TypeErradoInsertion);
  RUN_TEST_CASE(Sort, TestSelectionCorreto);
  RUN_TEST_CASE(Sort, TypeErradoSelection);
  RUN_TEST_CASE(Sort, TestHeapCorreto);
  RUN_TEST_CASE(Sort, TypeErradoHeap);
  RUN_TEST_CASE(Sort, TestMergeCorreto);
  RUN_TEST_CASE(Sort, TypeErradoMerge);
  RUN_TEST_CASE(Sort, TestQuickCorreto);
  RUN_TEST_CASE(Sort, TypeErradoQuick);
  RUN_TEST_CASE(Sort, TestDefault);
  RUN_TEST_CASE(Sort, LengthMaiorQueVetor);
  RUN_TEST_CASE(Sort, LengthMenorQueVetor);
  RUN_TEST_CASE(Sort, LimiteSuperiorIntCounting);
  RUN_TEST_CASE(Sort, LimiteSuperiorIntRadix);
  RUN_TEST_CASE(Sort, LimiteSuperiorIntBubble);
  RUN_TEST_CASE(Sort, LimiteSuperiorIntInsertion);
  RUN_TEST_CASE(Sort, LimiteSuperiorIntSelection);
  RUN_TEST_CASE(Sort, LimiteSuperiorIntHeap);
  RUN_TEST_CASE(Sort, LimiteSuperiorIntMerge);
  RUN_TEST_CASE(Sort, LimiteSuperiorIntQuick);
  // RUN_TEST_CASE(Sort, LimiteInferiorIntCounting);
  // RUN_TEST_CASE(Sort, LimiteInferiorIntRadix);
  // RUN_TEST_CASE(Sort, LimiteInferiorIntBubble);
  // RUN_TEST_CASE(Sort, LimiteInferiorIntInsertion);
  // RUN_TEST_CASE(Sort, LimiteInferiorIntSelection);
  // RUN_TEST_CASE(Sort, LimiteInferiorIntHeap);
  // RUN_TEST_CASE(Sort, LimiteInferiorIntMerge);
  // RUN_TEST_CASE(Sort, LimiteInferiorIntQuick);
  RUN_TEST_CASE(Sort, ForaLimitesIntCounting);
  RUN_TEST_CASE(Sort, ForaLimitesIntRadix);
  RUN_TEST_CASE(Sort, ForaLimitesIntBubble);
  RUN_TEST_CASE(Sort, ForaLimitesIntInsertion);
  RUN_TEST_CASE(Sort, ForaLimitesIntSelection);
  RUN_TEST_CASE(Sort, ForaLimitesIntHeap);
  RUN_TEST_CASE(Sort, ForaLimitesIntMerge);
  RUN_TEST_CASE(Sort, ForaLimitesIntQuick);
  RUN_TEST_CASE(Sort, ValorMeioIntCounting);
  // RUN_TEST_CASE(Sort, ValorMeioIntRadix);
  RUN_TEST_CASE(Sort, ValorMeioIntBubble);
  RUN_TEST_CASE(Sort, ValorMeioIntInsertion);
  RUN_TEST_CASE(Sort, ValorMeioIntSelection);
  RUN_TEST_CASE(Sort, ValorMeioIntHeap);
  RUN_TEST_CASE(Sort, ValorMeioIntMerge);
  RUN_TEST_CASE(Sort, ValorMeioIntQuick);
}
