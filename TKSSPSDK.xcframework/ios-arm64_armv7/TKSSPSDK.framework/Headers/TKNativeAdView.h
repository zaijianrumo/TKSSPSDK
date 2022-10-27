//
//  TKNativeAdView.h
//  TKSSPSDK
//
//  Created by 塔肯 on 2022/4/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TKNativeAdView : UIView
/*
 required.
 Root view controller for handling ad actions.
 */
@property (nonatomic, weak) UIViewController *rootViewController;

/**
 required
 */
- (void)render;

@end

NS_ASSUME_NONNULL_END
