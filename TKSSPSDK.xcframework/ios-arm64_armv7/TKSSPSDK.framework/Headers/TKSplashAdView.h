//
//  TKSplashAdView.h
//  TKSSPSDK
//
//  Created by 塔肯 on 2022/4/27.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@class TKSplashAdView;
@protocol TKSplashAdViewDelegate <NSObject>

@optional
/**
 This method is called when splash ad material loaded successfully.
 */
- (void)splashAdDidLoad:(TKSplashAdView *)splashAd;

/**
 This method is called when splash ad material failed to load.
 @param error : the reason of error
 */
- (void)splashAd:(TKSplashAdView *)splashAd didFailWithError:(NSError * _Nullable)error;

/**
 This method is called when splash ad slot will be showing.
 */
- (void)splashAdWillVisible:(TKSplashAdView *)splashAd;

/**
 This method is called when splash ad is clicked.
 */
- (void)splashAdDidClick:(TKSplashAdView *)splashAd;

/**
 This method is called when splash ad is closed.
 */
- (void)splashAdDidClose:(TKSplashAdView *)splashAd;

/**
 This method is called when spalashAd skip button  is clicked.
 */
- (void)splashAdDidClickSkip:(TKSplashAdView *)splashAd;

/**
 This method is called when spalashAd countdown equals to zero
 */
- (void)splashAdCountdownToZero:(TKSplashAdView *)splashAd;


@end
@interface TKSplashAdView : UIView <TKSplashAdViewDelegate>
/**
 The delegate for receiving state change messages.
 */
@property (nonatomic, weak, nullable) id<TKSplashAdViewDelegate> delegate;

/**
 Initializes splash ad with slot id and frame.
 @param slotID : the unique identifier of splash ad
 @param frame : the frame of splashAd view. It is recommended for the mobile phone screen.
 @return TKSplashAdView
 */
- (instancetype)initWithSlotId:(NSString *)slotID frame:(CGRect)frame;

/**
 Load splash ad datas.
 Start the countdown(@tolerateTimeout) as soon as you request datas.
 */
- (void)loadAdData;


- (void)showAdInWindow:(UIWindow *)window;

@end




NS_ASSUME_NONNULL_END
