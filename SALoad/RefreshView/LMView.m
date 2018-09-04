



//
//  LMView.m
//  RefreshView
//
//  Created by Saturday on 2016/12/1.
//  Copyright © 2016年 Saturday. All rights reserved.
//

#import "LMView.h"

@implementation LMView


-(void)setOffset:(CGFloat)offset{
    [super setOffset:offset];
    NSLog(@"%f  -   %f",offset,self.superScrollView.contentOffset.y);
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
