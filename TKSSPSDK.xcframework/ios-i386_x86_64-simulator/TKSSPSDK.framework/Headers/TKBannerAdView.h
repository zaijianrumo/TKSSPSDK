//
//  TKBannerAdView.h
//  TKSSPSDK
//
//  Created by 塔肯 on 2022/4/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class TKBannerAdView;

@protocol TKBannerAdViewDelegate <NSObject>

/**
 This method is called when banner ad material loaded successfully.
 */
- (void)bannerViewDidLoad;
/**
This method is called when banner ad material failed to load
*/
- (void)bannerViewAdFailured:(NSError *)error;
/**
 This method is called when banner ad slot will be showing.
 */
- (void)bannerViewExposed;
/**
 This method is called when banner ad is clicked.
 */
- (void)bannerViewClicked;
/**
 This method is called when banner ad is closed.
 */
- (void)bannerViewDidClosed;

@end

@interface TKBannerAdView : UIView


///  Initializes banner ad with slot id and frame.
/// @param slotId slotid
/// @param rootViewController show in ViewController
/// @param rect If height is adaptive,height value 0
- (instancetype)initWithSlotId:(nonnull NSString *)slotId
            rootViewController:(nonnull UIViewController *)rootViewController
                            adRect:(CGRect)rect;

@property (nonatomic ,weak,nullable) id<TKBannerAdViewDelegate>delegate;

/**
 hide closeBtn ,default NO.
 */
@property (nonatomic ,assign) BOOL hideColseBtn;

/**
 *  广告刷新间隔，范围 [30, 120] 秒，默认值 30 秒。设 0 则不刷新。 [可选]
 */
@property (nonatomic ,assign) NSInteger autoSwitchInterval;


- (void)loadAndShow;


@end

NS_ASSUME_NONNULL_END
