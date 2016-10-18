/*****************************************************************************************
 *  Copyright(c) 2016 Yang Zhizhuang (Software School of Dalian University of Technology)
 *  All rights reserved.
 *
 *  文件名称: onlinemessage.cpp
 *  简要描述:
 *
 *  创建日期: 2016-6-28
 *  作者: Yang Zhizhuang
 *  说明:
 *
 *  修改日期:
 *  作者:
 *  说明:
 ****************************************************************************************/
#include "onlinemessage.h"
/**
 * @brief onlineMessage::onlineMessage
 * @param username 用户名
 */
onlineMessage::onlineMessage(QString username)
{
    user=username;
    head="online";
}
/**
 * @brief onlineMessage::onlineMessage
 */
onlineMessage::onlineMessage()
{
    head="online";
}

