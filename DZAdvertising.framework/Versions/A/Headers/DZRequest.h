//
//  DZRequest.h
//  DZAdvertising
//
//  Created by Chen Andy on 16/2/24.
//  Copyright © 2016年 Chen Andy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DZRequest : NSObject<NSCopying>
@property(nonatomic, setter=setUserInfo:)NSDictionary *userInfo;
@property(nonatomic, strong)NSString *unitID;

/// Returns a default request.
+ (DZRequest *)request:(NSString *)unitID;

/// Returns the version of the SDK.
+ (NSString *)sdkVersion;

- (void)request:(NSDictionary *)params callback:(void(^)(NSDictionary *, NSError *))callback;
@end
