//
//  ZXBaseTableViewConfig.h
//  ZXBaseTableView
//
//  Created by 李兆祥 on 2018/8/21.
//  Copyright © 2018年 李兆祥. All rights reserved.
//

#ifndef ZXBaseTableViewConfig_h
#define ZXBaseTableViewConfig_h
#define IS_IPHONE_X (([[UIScreen mainScreen] bounds].size.height - 812)?NO:YES)
#define SYS_STATUSBAR_HEIGHT (IS_IPHONE_X ? 44 : 20)
#define APP_STATUSBAR_HEIGHT (CGRectGetHeight([UIApplication sharedApplication].statusBarFrame))
#define kNavi_Height (44 + SYS_STATUSBAR_HEIGHT)
#define REAL_HEIGHT (IS_IPHONE_X ? 10 : 20)
#define KSCREENWIDTH [UIScreen mainScreen].bounds.size.width
#define kSCREENHEIGHT ([UIScreen mainScreen].bounds.size.height - APP_STATUSBAR_HEIGHT + REAL_HEIGHT)

static NSString *const CELLH = @"cellH";
static NSString *const DATAMODEL = @"model";
#endif /* ZXBaseTableViewConfig_h */