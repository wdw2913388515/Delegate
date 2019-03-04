//
//  Boss.m
//  代理
//
//  Created by 伟大的大伟😘 on 2019/1/13.
//  Copyright © 2019 伟大的大伟😘. All rights reserved.
//

#import "Boss.h"

@implementation Boss
-(void)sendCommand{
    NSLog(@"买木头");
    [self.delegate BuyWood];
}
@end
