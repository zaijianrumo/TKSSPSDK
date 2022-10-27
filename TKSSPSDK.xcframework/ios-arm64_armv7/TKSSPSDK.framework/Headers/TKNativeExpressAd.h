//
//  TKNativeExpressAd.h
//  TKSSPSDK
//
//  Created by 塔肯 on 2022/4/28.
//

#import <Foundation/Foundation.h>

@class TKNativeExpressAd,TKNativeAdView;
@protocol TKNativeExpressAdDelegate <NSObject>


/**
 * Sent when views successfully load ad
 */
- (void)nativeExpressAdSuccessToLoad:(TKNativeExpressAd *_Nullable)nativeExpressAdManager views:(NSArray<__kindof TKNativeAdView *> *_Nullable)views;

/**
 * Sent when views fail to load ad
 */
- (void)nativeExpressAdFailToLoad:(TKNativeExpressAd *_Nullable)nativeExpressAdManager error:(NSError *_Nullable)error;

/**
 * This method is called when rendering a nativeExpressAdView successed, and nativeExpressAdView.size.height has been updated
 */
- (void)nativeExpressAdViewRenderSuccess:(TKNativeAdView *_Nullable)nativeExpressAdView;

/**
 * Sent when an ad view is clicked
 */
- (void)nativeExpressAdViewDidClick:(TKNativeAdView *_Nullable)nativeExpressAdView;

/**
 * Sent when an ad view is closed
 */
- (void)nativeAdDidClose:(TKNativeExpressAd *_Nullable)nativeExpressAdManager;

@end
NS_ASSUME_NONNULL_BEGIN

@interface TKNativeExpressAd : NSObject

/**
 The delegate for receiving state change messages from a TKNativeExpressAd
 */
@property (nonatomic, weak, nullable) id<TKNativeExpressAdDelegate> delegate;

/**
 @param size expected ad view size，when size.height is zero, acture height will match size.width
 */
- (instancetype)initWithSlot:(NSString * _Nullable)slot adSize:(CGSize)size;

/**
 The number of ads requested,The maximum is 1
 */
- (void)loadAdDataWithCount:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
