/*lint -e???? -save */
/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "mock_nrf_802154_ack_pending_bit.h"

typedef struct _CMOCK_nrf_802154_ack_pending_bit_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_nrf_802154_ack_pending_bit_init_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  bool Expected_enabled;
  int IgnoreArg_enabled;

} CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;
  uint8_t* Expected_p_addr;
  bool Expected_extended;
  int Expected_p_addr_Depth;
  int IgnoreArg_p_addr;
  int IgnoreArg_extended;

} CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;
  uint8_t* Expected_p_addr;
  bool Expected_extended;
  int Expected_p_addr_Depth;
  int IgnoreArg_p_addr;
  int IgnoreArg_extended;

} CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  bool Expected_extended;
  int IgnoreArg_extended;

} CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE;

typedef struct _CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;
  uint8_t* Expected_p_psdu;
  int Expected_p_psdu_Depth;
  int IgnoreArg_p_psdu;

} CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE;

static struct mock_nrf_802154_ack_pending_bitInstance
{
  int nrf_802154_ack_pending_bit_init_IgnoreBool;
  CMOCK_nrf_802154_ack_pending_bit_init_CALLBACK nrf_802154_ack_pending_bit_init_CallbackFunctionPointer;
  int nrf_802154_ack_pending_bit_init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_ack_pending_bit_init_CallInstance;
  int nrf_802154_ack_pending_bit_set_IgnoreBool;
  CMOCK_nrf_802154_ack_pending_bit_set_CALLBACK nrf_802154_ack_pending_bit_set_CallbackFunctionPointer;
  int nrf_802154_ack_pending_bit_set_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_ack_pending_bit_set_CallInstance;
  int nrf_802154_ack_pending_bit_for_addr_set_IgnoreBool;
  bool nrf_802154_ack_pending_bit_for_addr_set_FinalReturn;
  CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALLBACK nrf_802154_ack_pending_bit_for_addr_set_CallbackFunctionPointer;
  int nrf_802154_ack_pending_bit_for_addr_set_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_ack_pending_bit_for_addr_set_CallInstance;
  int nrf_802154_ack_pending_bit_for_addr_clear_IgnoreBool;
  bool nrf_802154_ack_pending_bit_for_addr_clear_FinalReturn;
  CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALLBACK nrf_802154_ack_pending_bit_for_addr_clear_CallbackFunctionPointer;
  int nrf_802154_ack_pending_bit_for_addr_clear_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_ack_pending_bit_for_addr_clear_CallInstance;
  int nrf_802154_ack_pending_bit_for_addr_reset_IgnoreBool;
  CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALLBACK nrf_802154_ack_pending_bit_for_addr_reset_CallbackFunctionPointer;
  int nrf_802154_ack_pending_bit_for_addr_reset_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_ack_pending_bit_for_addr_reset_CallInstance;
  int nrf_802154_ack_pending_bit_should_be_set_IgnoreBool;
  bool nrf_802154_ack_pending_bit_should_be_set_FinalReturn;
  CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALLBACK nrf_802154_ack_pending_bit_should_be_set_CallbackFunctionPointer;
  int nrf_802154_ack_pending_bit_should_be_set_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE nrf_802154_ack_pending_bit_should_be_set_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void mock_nrf_802154_ack_pending_bit_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_ack_pending_bit_init_CallInstance, cmock_line, "Function 'nrf_802154_ack_pending_bit_init' called less times than expected.");
  if (Mock.nrf_802154_ack_pending_bit_init_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_ack_pending_bit_init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_ack_pending_bit_set_CallInstance, cmock_line, "Function 'nrf_802154_ack_pending_bit_set' called less times than expected.");
  if (Mock.nrf_802154_ack_pending_bit_set_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_ack_pending_bit_set_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_set' called less times than expected.");
  if (Mock.nrf_802154_ack_pending_bit_for_addr_set_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_clear' called less times than expected.");
  if (Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallInstance, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_reset' called less times than expected.");
  if (Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance, cmock_line, "Function 'nrf_802154_ack_pending_bit_should_be_set' called less times than expected.");
  if (Mock.nrf_802154_ack_pending_bit_should_be_set_CallbackFunctionPointer != NULL)
    Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance = CMOCK_GUTS_NONE;
}

void mock_nrf_802154_ack_pending_bit_Init(void)
{
  mock_nrf_802154_ack_pending_bit_Destroy();
}

void mock_nrf_802154_ack_pending_bit_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.nrf_802154_ack_pending_bit_init_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_ack_pending_bit_init_CallbackCalls = 0;
  Mock.nrf_802154_ack_pending_bit_set_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_ack_pending_bit_set_CallbackCalls = 0;
  Mock.nrf_802154_ack_pending_bit_for_addr_set_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_ack_pending_bit_for_addr_set_CallbackCalls = 0;
  Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallbackCalls = 0;
  Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallbackCalls = 0;
  Mock.nrf_802154_ack_pending_bit_should_be_set_CallbackFunctionPointer = NULL;
  Mock.nrf_802154_ack_pending_bit_should_be_set_CallbackCalls = 0;
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void nrf_802154_ack_pending_bit_init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_ack_pending_bit_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_ack_pending_bit_init_CallInstance);
  Mock.nrf_802154_ack_pending_bit_init_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_ack_pending_bit_init_CallInstance);
  if (Mock.nrf_802154_ack_pending_bit_init_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_ack_pending_bit_init_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_ack_pending_bit_init_CallbackFunctionPointer(Mock.nrf_802154_ack_pending_bit_init_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_ack_pending_bit_init' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_init' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_init' called later than expected.");
}

void nrf_802154_ack_pending_bit_init_CMockIgnore(void)
{
  Mock.nrf_802154_ack_pending_bit_init_IgnoreBool = (int)1;
}

void nrf_802154_ack_pending_bit_init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_init_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_init_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void nrf_802154_ack_pending_bit_init_StubWithCallback(CMOCK_nrf_802154_ack_pending_bit_init_CALLBACK Callback)
{
  Mock.nrf_802154_ack_pending_bit_init_CallbackFunctionPointer = Callback;
}

void nrf_802154_ack_pending_bit_set(bool enabled)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_ack_pending_bit_set_CallInstance);
  Mock.nrf_802154_ack_pending_bit_set_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_ack_pending_bit_set_CallInstance);
  if (Mock.nrf_802154_ack_pending_bit_set_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_ack_pending_bit_set_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_ack_pending_bit_set_CallbackFunctionPointer(enabled, Mock.nrf_802154_ack_pending_bit_set_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_ack_pending_bit_set' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_set' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_set' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_enabled)
  {
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_enabled, enabled, cmock_line, "Function 'nrf_802154_ack_pending_bit_set' called with unexpected value for argument 'enabled'.");
  }
}

void CMockExpectParameters_nrf_802154_ack_pending_bit_set(CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE* cmock_call_instance, bool enabled)
{
  cmock_call_instance->Expected_enabled = enabled;
  cmock_call_instance->IgnoreArg_enabled = 0;
}

void nrf_802154_ack_pending_bit_set_CMockIgnore(void)
{
  Mock.nrf_802154_ack_pending_bit_set_IgnoreBool = (int)1;
}

void nrf_802154_ack_pending_bit_set_CMockExpect(UNITY_LINE_TYPE cmock_line, bool enabled)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_set_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_set_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_ack_pending_bit_set(cmock_call_instance, enabled);
}

void nrf_802154_ack_pending_bit_set_StubWithCallback(CMOCK_nrf_802154_ack_pending_bit_set_CALLBACK Callback)
{
  Mock.nrf_802154_ack_pending_bit_set_CallbackFunctionPointer = Callback;
}

void nrf_802154_ack_pending_bit_set_CMockIgnoreArg_enabled(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_ack_pending_bit_set_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "enabled IgnoreArg called before Expect on 'nrf_802154_ack_pending_bit_set'.");
  cmock_call_instance->IgnoreArg_enabled = 1;
}

bool nrf_802154_ack_pending_bit_for_addr_set(const uint8_t* p_addr, bool extended)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance);
  Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance);
  if (Mock.nrf_802154_ack_pending_bit_for_addr_set_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.nrf_802154_ack_pending_bit_for_addr_set_FinalReturn;
    Mock.nrf_802154_ack_pending_bit_for_addr_set_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.nrf_802154_ack_pending_bit_for_addr_set_CallbackFunctionPointer != NULL)
  {
    return Mock.nrf_802154_ack_pending_bit_for_addr_set_CallbackFunctionPointer(p_addr, extended, Mock.nrf_802154_ack_pending_bit_for_addr_set_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_set' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_set' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_set' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_p_addr)
  {
    if (cmock_call_instance->Expected_p_addr == NULL)
      { UNITY_TEST_ASSERT_NULL(p_addr, cmock_line, "Expected NULL. Function 'nrf_802154_ack_pending_bit_for_addr_set' called with unexpected value for argument 'p_addr'."); }
    else if (cmock_call_instance->Expected_p_addr_Depth == 0)
      { UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_p_addr, p_addr, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_set' called with unexpected value for argument 'p_addr'."); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_p_addr, p_addr, cmock_call_instance->Expected_p_addr_Depth, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_set' called with unexpected value for argument 'p_addr'."); }
  }
  if (!cmock_call_instance->IgnoreArg_extended)
  {
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_extended, extended, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_set' called with unexpected value for argument 'extended'.");
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_nrf_802154_ack_pending_bit_for_addr_set(CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE* cmock_call_instance, const uint8_t* p_addr, int p_addr_Depth, bool extended)
{
  cmock_call_instance->Expected_p_addr = (uint8_t*)p_addr;
  cmock_call_instance->Expected_p_addr_Depth = p_addr_Depth;
  cmock_call_instance->IgnoreArg_p_addr = 0;
  cmock_call_instance->Expected_extended = extended;
  cmock_call_instance->IgnoreArg_extended = 0;
}

void nrf_802154_ack_pending_bit_for_addr_set_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.nrf_802154_ack_pending_bit_for_addr_set_IgnoreBool = (int)1;
}

void nrf_802154_ack_pending_bit_for_addr_set_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint8_t* p_addr, bool extended, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_ack_pending_bit_for_addr_set(cmock_call_instance, p_addr, 0, extended);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_ack_pending_bit_for_addr_set_StubWithCallback(CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALLBACK Callback)
{
  Mock.nrf_802154_ack_pending_bit_for_addr_set_CallbackFunctionPointer = Callback;
}

void nrf_802154_ack_pending_bit_for_addr_set_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* p_addr, int p_addr_Depth, bool extended, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_ack_pending_bit_for_addr_set(cmock_call_instance, p_addr, p_addr_Depth, extended);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_ack_pending_bit_for_addr_set_CMockIgnoreArg_p_addr(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "p_addr IgnoreArg called before Expect on 'nrf_802154_ack_pending_bit_for_addr_set'.");
  cmock_call_instance->IgnoreArg_p_addr = 1;
}

void nrf_802154_ack_pending_bit_for_addr_set_CMockIgnoreArg_extended(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_ack_pending_bit_for_addr_set_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "extended IgnoreArg called before Expect on 'nrf_802154_ack_pending_bit_for_addr_set'.");
  cmock_call_instance->IgnoreArg_extended = 1;
}

bool nrf_802154_ack_pending_bit_for_addr_clear(const uint8_t* p_addr, bool extended)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance);
  Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance);
  if (Mock.nrf_802154_ack_pending_bit_for_addr_clear_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.nrf_802154_ack_pending_bit_for_addr_clear_FinalReturn;
    Mock.nrf_802154_ack_pending_bit_for_addr_clear_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallbackFunctionPointer != NULL)
  {
    return Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallbackFunctionPointer(p_addr, extended, Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_clear' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_clear' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_clear' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_p_addr)
  {
    if (cmock_call_instance->Expected_p_addr == NULL)
      { UNITY_TEST_ASSERT_NULL(p_addr, cmock_line, "Expected NULL. Function 'nrf_802154_ack_pending_bit_for_addr_clear' called with unexpected value for argument 'p_addr'."); }
    else if (cmock_call_instance->Expected_p_addr_Depth == 0)
      { UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_p_addr, p_addr, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_clear' called with unexpected value for argument 'p_addr'."); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_p_addr, p_addr, cmock_call_instance->Expected_p_addr_Depth, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_clear' called with unexpected value for argument 'p_addr'."); }
  }
  if (!cmock_call_instance->IgnoreArg_extended)
  {
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_extended, extended, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_clear' called with unexpected value for argument 'extended'.");
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_nrf_802154_ack_pending_bit_for_addr_clear(CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE* cmock_call_instance, const uint8_t* p_addr, int p_addr_Depth, bool extended)
{
  cmock_call_instance->Expected_p_addr = (uint8_t*)p_addr;
  cmock_call_instance->Expected_p_addr_Depth = p_addr_Depth;
  cmock_call_instance->IgnoreArg_p_addr = 0;
  cmock_call_instance->Expected_extended = extended;
  cmock_call_instance->IgnoreArg_extended = 0;
}

void nrf_802154_ack_pending_bit_for_addr_clear_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.nrf_802154_ack_pending_bit_for_addr_clear_IgnoreBool = (int)1;
}

void nrf_802154_ack_pending_bit_for_addr_clear_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint8_t* p_addr, bool extended, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_ack_pending_bit_for_addr_clear(cmock_call_instance, p_addr, 0, extended);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_ack_pending_bit_for_addr_clear_StubWithCallback(CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALLBACK Callback)
{
  Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallbackFunctionPointer = Callback;
}

void nrf_802154_ack_pending_bit_for_addr_clear_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* p_addr, int p_addr_Depth, bool extended, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_ack_pending_bit_for_addr_clear(cmock_call_instance, p_addr, p_addr_Depth, extended);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_ack_pending_bit_for_addr_clear_CMockIgnoreArg_p_addr(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "p_addr IgnoreArg called before Expect on 'nrf_802154_ack_pending_bit_for_addr_clear'.");
  cmock_call_instance->IgnoreArg_p_addr = 1;
}

void nrf_802154_ack_pending_bit_for_addr_clear_CMockIgnoreArg_extended(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_clear_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_ack_pending_bit_for_addr_clear_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "extended IgnoreArg called before Expect on 'nrf_802154_ack_pending_bit_for_addr_clear'.");
  cmock_call_instance->IgnoreArg_extended = 1;
}

void nrf_802154_ack_pending_bit_for_addr_reset(bool extended)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallInstance);
  Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallInstance);
  if (Mock.nrf_802154_ack_pending_bit_for_addr_reset_IgnoreBool)
  {
    return;
  }
  if (Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallbackFunctionPointer != NULL)
  {
    Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallbackFunctionPointer(extended, Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallbackCalls++);
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_reset' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_reset' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_reset' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_extended)
  {
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_extended, extended, cmock_line, "Function 'nrf_802154_ack_pending_bit_for_addr_reset' called with unexpected value for argument 'extended'.");
  }
}

void CMockExpectParameters_nrf_802154_ack_pending_bit_for_addr_reset(CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE* cmock_call_instance, bool extended)
{
  cmock_call_instance->Expected_extended = extended;
  cmock_call_instance->IgnoreArg_extended = 0;
}

void nrf_802154_ack_pending_bit_for_addr_reset_CMockIgnore(void)
{
  Mock.nrf_802154_ack_pending_bit_for_addr_reset_IgnoreBool = (int)1;
}

void nrf_802154_ack_pending_bit_for_addr_reset_CMockExpect(UNITY_LINE_TYPE cmock_line, bool extended)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_ack_pending_bit_for_addr_reset(cmock_call_instance, extended);
}

void nrf_802154_ack_pending_bit_for_addr_reset_StubWithCallback(CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALLBACK Callback)
{
  Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallbackFunctionPointer = Callback;
}

void nrf_802154_ack_pending_bit_for_addr_reset_CMockIgnoreArg_extended(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_for_addr_reset_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_ack_pending_bit_for_addr_reset_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "extended IgnoreArg called before Expect on 'nrf_802154_ack_pending_bit_for_addr_reset'.");
  cmock_call_instance->IgnoreArg_extended = 1;
}

bool nrf_802154_ack_pending_bit_should_be_set(const uint8_t* p_psdu)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance);
  Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance = CMock_Guts_MemNext(Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance);
  if (Mock.nrf_802154_ack_pending_bit_should_be_set_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.nrf_802154_ack_pending_bit_should_be_set_FinalReturn;
    Mock.nrf_802154_ack_pending_bit_should_be_set_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.nrf_802154_ack_pending_bit_should_be_set_CallbackFunctionPointer != NULL)
  {
    return Mock.nrf_802154_ack_pending_bit_should_be_set_CallbackFunctionPointer(p_psdu, Mock.nrf_802154_ack_pending_bit_should_be_set_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'nrf_802154_ack_pending_bit_should_be_set' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_should_be_set' called earlier than expected.");
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, "Function 'nrf_802154_ack_pending_bit_should_be_set' called later than expected.");
  if (!cmock_call_instance->IgnoreArg_p_psdu)
  {
    if (cmock_call_instance->Expected_p_psdu == NULL)
      { UNITY_TEST_ASSERT_NULL(p_psdu, cmock_line, "Expected NULL. Function 'nrf_802154_ack_pending_bit_should_be_set' called with unexpected value for argument 'p_psdu'."); }
    else if (cmock_call_instance->Expected_p_psdu_Depth == 0)
      { UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_p_psdu, p_psdu, cmock_line, "Function 'nrf_802154_ack_pending_bit_should_be_set' called with unexpected value for argument 'p_psdu'."); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_p_psdu, p_psdu, cmock_call_instance->Expected_p_psdu_Depth, cmock_line, "Function 'nrf_802154_ack_pending_bit_should_be_set' called with unexpected value for argument 'p_psdu'."); }
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_nrf_802154_ack_pending_bit_should_be_set(CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE* cmock_call_instance, const uint8_t* p_psdu, int p_psdu_Depth)
{
  cmock_call_instance->Expected_p_psdu = (uint8_t*)p_psdu;
  cmock_call_instance->Expected_p_psdu_Depth = p_psdu_Depth;
  cmock_call_instance->IgnoreArg_p_psdu = 0;
}

void nrf_802154_ack_pending_bit_should_be_set_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.nrf_802154_ack_pending_bit_should_be_set_IgnoreBool = (int)1;
}

void nrf_802154_ack_pending_bit_should_be_set_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const uint8_t* p_psdu, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_ack_pending_bit_should_be_set(cmock_call_instance, p_psdu, 0);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_ack_pending_bit_should_be_set_StubWithCallback(CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALLBACK Callback)
{
  Mock.nrf_802154_ack_pending_bit_should_be_set_CallbackFunctionPointer = Callback;
}

void nrf_802154_ack_pending_bit_should_be_set_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t* p_psdu, int p_psdu_Depth, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE));
  CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE* cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance = CMock_Guts_MemChain(Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_nrf_802154_ack_pending_bit_should_be_set(cmock_call_instance, p_psdu, p_psdu_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void nrf_802154_ack_pending_bit_should_be_set_CMockIgnoreArg_p_psdu(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE* cmock_call_instance = cmock_call_instance = (CMOCK_nrf_802154_ack_pending_bit_should_be_set_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.nrf_802154_ack_pending_bit_should_be_set_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "p_psdu IgnoreArg called before Expect on 'nrf_802154_ack_pending_bit_should_be_set'.");
  cmock_call_instance->IgnoreArg_p_psdu = 1;
}

/* lint -restore */
