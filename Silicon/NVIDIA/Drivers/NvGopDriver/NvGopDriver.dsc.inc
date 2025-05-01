# DSC include file for NvGopDriver
#
# SPDX-FileCopyrightText: Copyright (c) 2022-2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

[Components.common]
!ifdef CONFIG_SOC_T26X
  Silicon/NVIDIA/Drivers/NvGopDriver/nvgop-gb1xx-platform.inf
!else
  Silicon/NVIDIA/Drivers/NvGopDriver/nvgop-chips-platform.inf
!endif
