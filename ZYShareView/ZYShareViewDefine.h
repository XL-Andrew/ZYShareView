//
//  ZYShareViewDefine.h
//  ShareViewDemo
//
//  Created by ZZY on 16/3/28.
//  Copyright (c) 2016年 tongbu. All rights reserved.
//

#define ZY_HideNotification         @"ZY_HideNotification"

#define ZY_ScreenHeight             [UIScreen mainScreen].bounds.size.height
#define ZY_ScreenWidth              [UIScreen mainScreen].bounds.size.width

#define is_iPhoneX ((int)((ZY_ScreenHeight / ZY_ScreenWidth) * 100) == 216)?YES:NO

#define ZY_CancelButtonHeight       ((is_iPhoneX)?83.0f:49.0f)    // 取消按钮的高度

#define ZY_ItemCellHeight           123.f   // 每个item的高度
#define ZY_ItemCellWidth            72.f    // 每个item的宽度
#define ZY_ItemCellPadding          14.f    // item之间的距离

#define ZY_AnimateDuration          0.3     // 动画时间
#define ZY_DimBackgroundAlpha       0.3     // 半透明背景的alpha值
