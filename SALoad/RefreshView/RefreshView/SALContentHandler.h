//
//  SALContentInsetHandler.h
//  RefreshView
//
//  Created by Saturday on 2017/10/16.
//  Copyright © 2017年 Saturday. All rights reserved.
//

#import "SALHandler.h"

@interface SALContentHandler : SALHandler

#pragma mark - 有效位移 正数
-(CGFloat)offsetTop;
-(CGFloat)offsetBottom;
-(CGFloat)offsetLeft;
-(CGFloat)offsetRight;

-(UIEdgeInsets)insetWithOffsetTop;
-(UIEdgeInsets)insetWithOffsetBottom;
-(UIEdgeInsets)insetWithOffsetLeft;
-(UIEdgeInsets)insetWithOffsetRight;

//-(void)setOffsetWithNewX:(CGFloat)x;
//-(void)setOffsetWithNewY:(CGFloat)y;

@end
