/*
* Samsung Exynos5 SoC series FIMC-IS driver
 *
 * exynos5 fimc-is vender functions
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_VENDER_H
#define FIMC_IS_VENDER_H

#include <linux/types.h>
#include <linux/platform_device.h>
#include <linux/videodev2.h>
#include <linux/device.h>

#include "exynos-fimc-is-sensor.h"
#include "fimc-is-device-csi.h"

#define FIMC_IS_PATH_LEN 100
#define VENDER_S_CTRL 0
#define VENDER_G_CTRL 0

struct fimc_is_vender {
	char fw_path[FIMC_IS_PATH_LEN];
	char request_fw_path[FIMC_IS_PATH_LEN];
	char setfile_path[SENSOR_POSITION_MAX][FIMC_IS_PATH_LEN];
	char request_setfile_path[SENSOR_POSITION_MAX][FIMC_IS_PATH_LEN];
	void *private_data;
	int companion_crc_error;
};

enum {
	FW_SKIP,
	FW_SUCCESS,
	FW_FAIL,
};

enum fimc_is_rom_type {
	ROM_TYPE_NONE	= 0,
	ROM_TYPE_FROM	= 1,
	ROM_TYPE_EEPROM	= 2,
	ROM_TYPE_OTPROM	= 3,
	ROM_TYPE_MAX,
};

struct fimc_is_rom_data {
	u32 rom_type;
	u32 rom_valid;
	bool is_rom_read; 
};

enum {
	COMPANION_CRC_ERROR_INIT_ON_BOOT,
	COMPANION_CRC_ERROR_NONE_ON_BOOT,
	COMPANION_CRC_ERROR_OCCUR_ON_BOOT,
	COMPANION_CRC_ERROR_RESET_ON_BOOT,
	COMPANION_CRC_ERROR_FATAL_ON_BOOT
};

#ifdef USE_CAMERA_MIPI_CLOCK_VARIATION
enum {
	CAMERA_MIPI_CLOCK_0,
	CAMERA_MIPI_CLOCK_1,
	CAMERA_MIPI_CLOCK_MAX,
	CAMERA_MIPI_CLOCK_DEFAULT = CAMERA_MIPI_CLOCK_0,
};

enum {
	CAMERA_RAT_BASE = 1,
	CAMERA_RAT_GSM = 1,
	CAMERA_RAT_CDMA = 2,
	CAMERA_RAT_LTE = 3,
	CAMERA_RAT_UMTS = 4,
	CAMERA_RAT_MAX
};
#endif

#ifdef USE_CAMERA_HW_BIG_DATA
#define CAM_HW_ERR_CNT_FILE_PATH "/data/camera/camera_hw_err_cnt.dat"

struct cam_hw_param {
	u32 i2c_sensor_err_cnt;
	u32 i2c_comp_err_cnt;
	u32 i2c_ois_err_cnt;
	u32 i2c_af_err_cnt;
	u32 i2c_iris_err_cnt;
	u32 mipi_sensor_err_cnt;
	u32 mipi_comp_err_cnt;
} __attribute__((__packed__));

struct cam_hw_param_collector {
	struct cam_hw_param rear_hwparam;
	struct cam_hw_param rear2_hwparam;
	struct cam_hw_param rear3_hwparam;
	struct cam_hw_param front_hwparam;
	struct cam_hw_param front2_hwparam;
	struct cam_hw_param iris_hwparam;
} __attribute__((__packed__));

void fimc_is_sec_init_err_cnt_file(struct cam_hw_param *hw_param);
bool fimc_is_sec_need_update_to_file(void);
void fimc_is_sec_copy_err_cnt_from_file(void);
void fimc_is_sec_copy_err_cnt_to_file(void);
void fimc_is_sec_get_hw_param(struct cam_hw_param **hw_param, u32 position);
bool fimc_is_sec_is_valid_moduleid(char* moduleid);
#endif

void fimc_is_vendor_csi_stream_on(struct fimc_is_device_csi *csi);
void fimc_is_vender_csi_err_handler(struct fimc_is_device_csi *csi);

#ifdef CONFIG_USE_DIRECT_IS_CONTROL
void fimc_is_vender_csi_err_print_debug_log(struct fimc_is_device_sensor *device);
#endif

int fimc_is_vender_probe(struct fimc_is_vender *vender);
int fimc_is_vender_dt(struct device_node *np);
int fimc_is_vender_fw_prepare(struct fimc_is_vender *vender);
int fimc_is_vender_fw_filp_open(struct fimc_is_vender *vender, struct file **fp, int bin_type);
int fimc_is_vender_preproc_fw_load(struct fimc_is_vender *vender);
int fimc_is_vender_cal_load(struct fimc_is_vender *vender, void *module_data);
int fimc_is_vender_module_sel(struct fimc_is_vender *vender, void *module_data);
int fimc_is_vender_module_del(struct fimc_is_vender *vender, void *module_data);
int fimc_is_vender_fw_sel(struct fimc_is_vender *vender);
int fimc_is_vender_setfile_sel(struct fimc_is_vender *vender, char *setfile_name, int position);
int fimc_is_vender_preprocessor_gpio_on_sel(struct fimc_is_vender *vender, u32 scenario, u32 *gpio_scenario);
int fimc_is_vender_preprocessor_gpio_on(struct fimc_is_vender *vender, u32 scenario, u32 gpio_scenario);
int fimc_is_vender_sensor_gpio_on_sel(struct fimc_is_vender *vender, u32 scenario, u32 *gpio_scenario);
int fimc_is_vender_sensor_gpio_on(struct fimc_is_vender *vender, u32 scenario, u32 gpio_scenario);
int fimc_is_vender_preprocessor_gpio_off_sel(struct fimc_is_vender *vender, u32 scenario, u32 *gpio_scenario,
	void *module_data);
int fimc_is_vender_preprocessor_gpio_off(struct fimc_is_vender *vender, u32 scenario, u32 gpio_scenario);
int fimc_is_vender_sensor_gpio_off_sel(struct fimc_is_vender *vender, u32 scenario, u32 *gpio_scenario);
int fimc_is_vender_sensor_gpio_off(struct fimc_is_vender *vender, u32 scenario, u32 gpio_scenario);
void fimc_is_vender_itf_open(struct fimc_is_vender *vender, struct sensor_open_extended *ext_info);
#ifdef CONFIG_LEDS_SUPPORT_FRONT_FLASH_AUTO
int fimc_is_vender_set_torch(u32 aeflashMode, u32 frontFlashMode);
#else
int fimc_is_vender_set_torch(u32 aeflashMode);
#endif
int fimc_is_vender_video_s_ctrl(struct v4l2_control *ctrl, void *device_data);
int fimc_is_vender_ssx_video_s_ctrl(struct v4l2_control *ctrl, void *device_data);
int fimc_is_vender_ssx_video_g_ctrl(struct v4l2_control *ctrl, void *device_data);
int fimc_is_vender_hw_init(struct fimc_is_vender *vender);
void fimc_is_vender_check_hw_init_running(void);
void fimc_is_vender_sensor_s_input(struct fimc_is_vender *vender, void *module);
bool fimc_is_vender_wdr_mode_on(void *cis_data);
int fimc_is_vender_fsync_mode_on(void *cis_data);
bool fimc_is_vender_enable_wdr(void *cis_data);
int fimc_is_vender_request_binary(struct fimc_is_binary * bin, const char * path1, const char * path2, const char * name, struct device * device);
#endif
