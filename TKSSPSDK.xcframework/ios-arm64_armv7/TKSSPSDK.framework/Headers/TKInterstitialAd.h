//
//  TKInterstitialAd.h
//  TKSSPSDK
//
//  Created by 塔肯 on 2022/5/5.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@protocol TKInterstitialAdDelegate <NSObject>

/**
 * Sent when an ad view is load success
 */
- (void)interstitialAdDidLoaded;
/**
 * Sent when an ad view is render success
 */
- (void)interstitialAdRenderSuccessed;
/**
 * Sent when an ad view is clicked
 */
- (void)interstitialAdClicked;
/**
 * Sent when an ad view is failred
 */
- (void)interstitialAdDidFailured:(NSError *)error;
/**
 * Sent when an ad view is closed
 */
- (void)interstitialAdCloseed;

@end

@interface TKInterstitialAd : NSObject

@property (nonatomic, weak, nullable) id<TKInterstitialAdDelegate> delegate;

- (instancetype)initWithSlot:(NSString *)slot;

/**
 * load  ad Data
 */
- (void)loadAdData;

/**
 * render ad 
 */
- (void)renderAd:(UIViewController *)rootViewController;

@end


NS_ASSUME_NONNULL_END
