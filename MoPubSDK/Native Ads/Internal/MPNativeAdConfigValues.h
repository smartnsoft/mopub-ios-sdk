//
//  MPNativeAdConfigValues.h
//  MoPubSDK
//
//  Copyright © 2017 MoPub. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPNativeAdConfigValues : NSObject

@property (nonatomic, readonly) NSInteger impressionMinVisiblePercent;
@property (nonatomic, readonly) NSTimeInterval impressionMinVisibleSeconds;

- (instancetype)initWithImpressionMinVisiblePercent:(NSInteger)impressionMinVisiblePercent
                        impressionMinVisibleSeconds:(NSTimeInterval)impressionMinVisibleSeconds NS_DESIGNATED_INITIALIZER;

@property (nonatomic, readonly) BOOL isImpressionMinVisiblePercentValid;
@property (nonatomic, readonly) BOOL isImpressionMinVisibleSecondsValid;

/**
 * `init` is not available.
 */
- (instancetype)init __attribute__((unavailable("init not available")));

@end
