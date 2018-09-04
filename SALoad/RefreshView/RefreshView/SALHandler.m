//
//  SALHandler.m
//  RefreshView
//
//  Created by Saturday on 2017/10/14.
//  Copyright © 2017年 Saturday. All rights reserved.
//

#import "SALHandler.h"

@interface SALHandler ()

@property (nonatomic, weak) LoadController *lrlLoadController;

@end

@implementation SALHandler

-(void)dealloc{

}

-(instancetype)initWithLoadController:(LoadController *)loadController{
    self = [super init];
    if (self) {
        self.lrlLoadController = loadController;
    }
    return self;
}

#pragma mark - set get

-(LoadController *)loadController{
    return self.lrlLoadController;
}

-(UIScrollView *)scrollView{
    return self.loadController.scrollView;
}

-(LoadView *)loadTopView{
    return self.loadController.loadTopView;
}

-(LoadView *)loadBottomView{
    return self.loadController.loadBottomView;
}

-(LoadView *)loadLeftView{
    return self.loadController.loadLeftView;
}

-(LoadView *)loadRightView{
    return self.loadController.loadRightView;
}

-(UIEdgeInsets)normalContentInset{
    return self.loadController.normalContentInset;
}

@end
