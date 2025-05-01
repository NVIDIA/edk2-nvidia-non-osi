# FDF include file for NvGopDriver
#
# SPDX-FileCopyrightText: Copyright (c) 2022-2025 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

!ifdef CONFIG_SOC_T26X
  INF Silicon/NVIDIA/Drivers/NvGopDriver/nvgop-gb1xx-platform.inf
!else
  INF Silicon/NVIDIA/Drivers/NvGopDriver/nvgop-chips-platform.inf
!endif
