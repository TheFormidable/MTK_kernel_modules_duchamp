#
# Copyright (C) 2015 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#

UNQUOTE_CONFIG_MTK_GPU_VERSION = $(subst ",,$(CONFIG_MTK_GPU_VERSION))
ifneq ($(UNQUOTE_CONFIG_MTK_GPU_VERSION),)
MTK_GPU_VERSION = $(UNQUOTE_CONFIG_MTK_GPU_VERSION)
endif

ifneq ($(word 3,$(MTK_GPU_VERSION)),)
    obj-y += mali-$(word 3,$(MTK_GPU_VERSION))/drivers/gpu/arm/midgard/
else
    obj-y += mali-EAC/drivers/
endif
