//
//  LoadContrller.h
//  RefreshView
//
//  Created by Saturday on 15/6/10.
//  Copyright (c) 2015年 Saturday. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LoadView.h"

@protocol LoadControllerDelegate <NSObject>

@optional
-(void)loadTopFinish:(void (^)(CGFloat insetHeight))finish withScrollView:(UIScrollView *)scrollView;
-(void)loadBottomFinish:(void (^)(void))finish withScrollView:(UIScrollView *)scrollView;

-(void)loadLeftFinish:(void (^)(CGFloat insetWidth))finish withScrollView:(UIScrollView *)scrollView;
-(void)loadRightFinish:(void (^)(void))finish withScrollView:(UIScrollView *)scrollView;
@end

@interface LoadController : NSObject

//设置对应的加载界面  设置时即开启加载功能
@property (nonatomic, strong) LoadView *loadTopView;
@property (nonatomic, strong) LoadView *loadBottomView;
@property (nonatomic, strong) LoadView *loadLeftView;
@property (nonatomic, strong) LoadView *loadRightView;

@property (nonatomic, readonly) UIScrollView *scrollView;

@property (nonatomic, assign) id<LoadControllerDelegate> delegate;

@property (nonatomic, assign) UIEdgeInsets normalContentInset;//正常状态的contentInset

-(instancetype)initWithScrollView:(UIScrollView *)scrollView;

//
-(void)disappearLoadBottom;
-(void)showLoadTop;
-(void)disappearLoadTop;

-(void)clearScrollView:(UIScrollView *)scrollView;//如果强引用了该类，需要在dealloc手动释放

@end
