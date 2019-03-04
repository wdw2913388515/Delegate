//
//  main.m
//  代理
//
//  Created by 伟大的大伟😘 on 2019/1/13.
//  Copyright © 2019 伟大的大伟😘. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Boss.h"
#import "Worker.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        Worker * worker = [[Worker alloc]init];
        
        Boss * boss = [[Boss alloc]init];
        
        [boss setDelegate:worker];
        boss.delegate = worker;
        [boss sendCommand];
        
    }
    return 0;
}
