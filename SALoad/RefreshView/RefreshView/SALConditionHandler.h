//
//  SALConditionHandler.h.h
//  RefreshView
//
//  Created by Saturday on 2017/10/14.
//  Copyright © 2017年 Saturday. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SALHandler.h"


typedef NS_ENUM(NSInteger, SALDirection) {
    SALDirection_Horizontal,
    SALDirection_Vertical
};


@interface SALConditionHandler : SALHandler


#pragma mark - 是否可触发滑动操作
-(BOOL)canHandleScrollTop;
-(BOOL)canHandleScrollBottom;
-(BOOL)canHandleScrollLeft;
-(BOOL)canHandleScrollRight;


#pragma mark - 手指结束滑动后是否满足加载条件
-(BOOL)canLoadTopWhenEndDrag;
-(BOOL)canLoadBottomWhenEndDrag;
-(BOOL)canLoadLeftWhenEndDrag;
-(BOOL)canLoadRightWhenEndDrag;

@end
