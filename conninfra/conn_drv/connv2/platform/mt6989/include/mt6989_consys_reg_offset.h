/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2023 MediaTek Inc.
 */

#ifndef _PLATFORM_MT6989_CONSYS_REG_OFFSET_H_
#define _PLATFORM_MT6989_CONSYS_REG_OFFSET_H_

#include "mt6989_consys_reg.h"

#define INFRABUS_AO_REG_BASE_ADDR (INFRABUS_AO_REG_BASE_ADDR_MT6989)
#define SPM_BASE_ADDR             (SPM_BASE_ADDR_MT6989)

/**********************************************************************
 * conn_bus_cr
 * Base:
 * Size:
 *********************************************************************/
#include "conn_bus_cr_mt6989.h"
#define CONN_BUS_CR_CONN_INFRA_OFF_BUS_TIMEOUT_CTRL_ADDR_OFFSET 0x24

/**********************************************************************
 * conn_bus_cr_on
 * Base:
 * Size:
 *********************************************************************/
#include "conn_bus_cr_on_mt6989.h"

/**********************************************************************
 * conn_cfg
 * Base:
 * Size:
 ********************************************************************/
#include "conn_cfg_mt6989.h"
#define CONN_HW_VER	0x2050500

/**********************************************************************
 * conn_cfg_on
 * Base:
 * Size:
 *********************************************************************/
#include "conn_cfg_on_mt6989.h"

/**********************************************************************
 * conn_clkgen_top
 * Base:
 * Size:
 *********************************************************************/
#include "conn_clkgen_top_mt6989.h"

/**********************************************************************
 * conn_host_csr_top
 * Base:
 * Size:
 *********************************************************************/
#include "conn_host_csr_top_mt6989.h"

/**********************************************************************
 * conn_off_debug_ctrl_ao
 * Base:
 * Size:
 *********************************************************************/
#include "conn_off_debug_ctrl_ao_mt6989.h"

/**********************************************************************
 * conn_rf_spi_mst_reg
 * Base:
 * Size:
 *********************************************************************/
#include "conn_rf_spi_mst_reg_mt6989.h"
/* For RFSPI table usage */
#define CONN_RF_SPI_MST_REG_SPI_STA_OFFSET          0x0000
#define CONN_RF_SPI_MST_REG_SPI_TOP_ADDR_OFFSET     0x0050
#define CONN_RF_SPI_MST_REG_SPI_TOP_WDAT_OFFSET     0x0054
#define CONN_RF_SPI_MST_REG_SPI_TOP_RDAT_OFFSET     0x0058
#define CONN_RF_SPI_MST_REG_SPI_GPS_GPS_ADDR_OFFSET 0x0210
#define CONN_RF_SPI_MST_REG_SPI_GPS_GPS_WDAT_OFFSET 0x0214
#define CONN_RF_SPI_MST_REG_SPI_GPS_GPS_RDAT_OFFSET 0x0218

/**********************************************************************
 * conn_rgu_on
 * Base:
 * Size:
 *********************************************************************/
#include "conn_rgu_on_mt6989.h"

/**********************************************************************
 * conn_semaphore
 * Base:
 * Size:
 *********************************************************************/
#include "conn_semaphore_mt6989.h"

/**********************************************************************
 * conn_wt_slp_ctl_reg
 * Base:
 * Size:
 *********************************************************************/
#include "conn_wt_slp_ctl_reg_mt6989.h"

/**********************************************************************
 * conn_infra_sysram
 * Base: 0x18050000
 * Size: 8KB
 *     1. 4KB conninfra cmdbt
 *     2. 4KB SW CR
 *********************************************************************/
/* Need to clean full region */
#define CONN_INFRA_SYSRAM_PHY_BASE              0x18050000
#define CONN_INFRA_SYSRAM_SIZE                  (8 * 1024)

#define CONN_INFRA_SYSRAM_BASE                  (CONN_INFRA_SYSRAM_BASE_ADDR_MT6989)
#define CONN_INFRA_SYSRAM_SW_CR_BASE            (CONN_INFRA_SYSRAM_BASE_ADDR_MT6989 + 4*1024)

#define CONN_INFRA_SYSRAM_SW_CR_D_DIE_EFUSE     (CONN_INFRA_SYSRAM_SW_CR_BASE + 0x020)
#define CONN_INFRA_SYSRAM_SW_CR_RADIO_STATUS    (CONN_INFRA_SYSRAM_SW_CR_BASE + 0x034)
#define CONN_INFRA_SYSRAM_SW_CR_BUILD_MODE      (CONN_INFRA_SYSRAM_SW_CR_BASE + 0x038)
#define CONN_INFRA_SYSRAM_SW_CR_MCU_LOG_CONTROL (CONN_INFRA_SYSRAM_SW_CR_BASE + 0x040)

/**********************************************************************
 * conn_afe_ctl
 * Base:
 * Size:
 *********************************************************************/
#include "conn_afe_ctl_mt6989.h"

/**********************************************************************
 * conn_dbg_ctl
 * Base:
 * Size:
 *********************************************************************/
#include "conn_dbg_ctl_mt6989.h"

/**********************************************************************
 * Misc
 *********************************************************************/
#define REG_SRCLKENRC_BASE        (VLPSYS_SRCLKENRC_MT6989)
#define SRCLKENRC_RC_CENTRAL_CFG1 (REG_SRCLKENRC_BASE + 0x0004) /* To check if RC mode support */

#define CONSYS_DBG_GEN_TOPCKGEN_BASE_ADDR       0x10000000

#endif /* _PLATFORM_MT6989_CONSYS_REG_OFFSET_H_ */
