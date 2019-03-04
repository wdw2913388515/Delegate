//
//  Worker.h
//  代理
//
//  Created by 伟大的大伟😘 on 2019/1/13.
//  Copyright © 2019 伟大的大伟😘. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Boss.h"
NS_ASSUME_NONNULL_BEGIN

@interface Worker : NSObject <BossDelegate>

@end

NS_ASSUME_NONNULL_END
