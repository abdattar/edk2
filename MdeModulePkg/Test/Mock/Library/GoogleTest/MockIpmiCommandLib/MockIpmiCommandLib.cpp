/** @file
  Google Test mocks for IpmiCommandLib

  Copyright (C) 2026 Advanced Micro Devices, Inc. All rights reserved.
  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#include <GoogleTest/Library/MockIpmiCommandLib.h>

MOCK_INTERFACE_DEFINITION (MockIpmiCommandLib);
MOCK_FUNCTION_DEFINITION (MockIpmiCommandLib, IpmiWriteBootInitiatorMailbox, 3, EFIAPI);
MOCK_FUNCTION_DEFINITION (MockIpmiCommandLib, IpmiReadBootInitiatorMailbox, 2, EFIAPI);
