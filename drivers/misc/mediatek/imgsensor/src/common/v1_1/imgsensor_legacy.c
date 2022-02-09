/*
 * Copyright (C) 2017 MediaTek Inc.
 * Copyright (C) 2021 XiaoMi, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include "kd_camera_typedef.h"
#include "imgsensor_i2c.h"

#ifdef IMGSENSOR_LEGACY_COMPAT
void kdSetI2CSpeed(u16 i2cSpeed)
{

}

int iReadRegI2C(u8 *a_pSendData, u16 a_sizeSendData,
		u8 *a_pRecvData, u16 a_sizeRecvData,
		u16 i2cId)
{
	if (imgsensor_i2c_get_device() == NULL)
		return IMGSENSOR_RETURN_ERROR;

	return imgsensor_i2c_read(
			imgsensor_i2c_get_device(),
			a_pSendData,
			a_sizeSendData,
			a_pRecvData,
			a_sizeRecvData,
			i2cId,
			IMGSENSOR_I2C_SPEED);
}

int iReadRegI2CTiming(u8 *a_pSendData, u16 a_sizeSendData, u8 *a_pRecvData,
			u16 a_sizeRecvData, u16 i2cId, u16 timing)
{
	if (imgsensor_i2c_get_device() == NULL)
		return IMGSENSOR_RETURN_ERROR;

	return imgsensor_i2c_read(
			imgsensor_i2c_get_device(),
			a_pSendData,
			a_sizeSendData,
			a_pRecvData,
			a_sizeRecvData,
			i2cId,
			timing);
}

int iWriteRegI2C(u8 *a_pSendData, u16 a_sizeSendData, u16 i2cId)
{
	if (imgsensor_i2c_get_device() == NULL)
		return IMGSENSOR_RETURN_ERROR;

	return imgsensor_i2c_write(
			imgsensor_i2c_get_device(),
			a_pSendData,
			a_sizeSendData,
			a_sizeSendData,
			i2cId,
			IMGSENSOR_I2C_SPEED);
}

int iWriteRegI2CTiming(u8 *a_pSendData, u16 a_sizeSendData,
			u16 i2cId, u16 timing)
{
	if (imgsensor_i2c_get_device() == NULL)
		return IMGSENSOR_RETURN_ERROR;

	return imgsensor_i2c_write(
			imgsensor_i2c_get_device(),
			a_pSendData,
			a_sizeSendData,
			a_sizeSendData,
			i2cId,
			timing);
}

int iBurstWriteReg(u8 *pData, u32 bytes, u16 i2cId)
{
	if (imgsensor_i2c_get_device() == NULL)
		return IMGSENSOR_RETURN_ERROR;

	return imgsensor_i2c_write(
			imgsensor_i2c_get_device(),
			pData,
			bytes,
			bytes,
			i2cId,
			IMGSENSOR_I2C_SPEED);
}

int iBurstWriteReg_multi(u8 *pData, u32 bytes, u16 i2cId,
				u16 transfer_length, u16 timing)
{
	if (imgsensor_i2c_get_device() == NULL)
		return IMGSENSOR_RETURN_ERROR;

	return imgsensor_i2c_write(
			imgsensor_i2c_get_device(),
			pData,
			bytes,
			transfer_length,
			i2cId,
			timing);
}

/* --start */
kal_uint16 read_eeprom_module_id(kal_uint8 saddr, kal_uint32 addr)
{
	kal_uint16 get_byte = 0;

	char pu_send_cmd[2] = { (char)(addr >> 8), (char)(addr & 0xFF) };

	iReadRegI2C(pu_send_cmd, 2, (u8 *) &get_byte, 1, saddr);

	return get_byte;
}
/* --end */

#endif
