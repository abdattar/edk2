/** @file
  Google Test mocks for IpmiCommandLib

  Only the boot-initiator-mailbox helpers are mocked (the functions actually
  consumed by host tests so far); extend with additional
  MOCK_FUNCTION_DECLARATION entries as more IpmiCommandLib consumers gain
  host-based unit tests, rather than adding a parallel hand-rolled stub.

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#pragma once

#include <Library/GoogleTestLib.h>
#include <Library/FunctionMockLib.h>
extern "C" {
  #include <Uefi.h>
  #include <Library/IpmiCommandLib.h>
}

struct MockIpmiCommandLib {
  MOCK_INTERFACE_DECLARATION (MockIpmiCommandLib);

  MOCK_FUNCTION_DECLARATION (
    EFI_STATUS,
    IpmiWriteBootInitiatorMailbox,
    (IN UINT8  SetSelector,
     IN UINT8  *Data,
     IN UINTN  Size)
    );

  MOCK_FUNCTION_DECLARATION (
    EFI_STATUS,
    IpmiReadBootInitiatorMailbox,
    (IN  UINT8  SetSelector,
     OUT UINT8  **ReadData)
    );
};
