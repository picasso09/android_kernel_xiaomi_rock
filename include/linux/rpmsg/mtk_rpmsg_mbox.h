#ifndef __MTK_RPMSG_MBOX_H__
#define __MTK_RPMSG_MBOX_H__

#include <linux/platform_device.h>

struct mtk_rpmsg_device;
struct mtk_mbox_device;

struct mtk_rpmsg_device *mtk_rpmsg_create_device(struct platform_device *pdev,
     						 struct mtk_mbox_device *mbdev, unsigned int ipc_chan_id);
#endif
