//
//  Boss.h
//  代理
//
//  Created by 伟大的大伟😘 on 2019/1/13.
//  Copyright © 2019 伟大的大伟😘. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol BossDelegate <NSObject>

-(void)BuyWood;

@end

@interface Boss : NSObject

@property (nonatomic,strong) id <BossDelegate>  delegate;
-(void)sendCommand;

@end

NS_ASSUME_NONNULL_END
