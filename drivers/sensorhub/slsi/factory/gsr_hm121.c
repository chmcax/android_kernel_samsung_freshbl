/*
 *  Copyright (C) 2012, Samsung Electronics Co. Ltd. All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */
#include "../ssp.h"

/*************************************************************************/
/* factory Sysfs                                                         */
/*************************************************************************/

#define VENDOR		"STM"
#define CHIP_ID		"HM121"

static ssize_t gsr_vendor_show(struct device *dev,
	struct device_attribute *attr, char *buf)
{
	return snprintf(buf, PAGE_SIZE, "%s\n", VENDOR);
}

static ssize_t gsr_name_show(struct device *dev,
	struct device_attribute *attr, char *buf)
{
	return snprintf(buf, PAGE_SIZE, "%s\n", CHIP_ID);
}

static DEVICE_ATTR(name, S_IRUGO, gsr_name_show, NULL);
static DEVICE_ATTR(vendor, S_IRUGO, gsr_vendor_show, NULL);

static struct device_attribute *gsr_attrs[] = {
	&dev_attr_name,
	&dev_attr_vendor,
	NULL,
};

void initialize_hm121_gsr_factorytest(struct ssp_data *data)
{
	sensors_register(data->gsr_device,
		data, gsr_attrs, "gsr_sensor");
}

void remove_hm121_gsr_factorytest(struct ssp_data *data)
{
	sensors_unregister(data->gsr_device, gsr_attrs);
}
