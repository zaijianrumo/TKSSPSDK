//
//  TKSSPSDKConfig.h
//  TKSSPSDK
//
//  Created by 塔肯 on 2022/4/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TKSSPSDKConfig : NSObject

+ (void)registerAppId:(NSString *)appid ;

+ (NSString *)TKSSPSDKVersion ;

@end

NS_ASSUME_NONNULL_END
