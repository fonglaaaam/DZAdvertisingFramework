//
//  DZBannberView.h
//  DZAdvertising
//
//  Created by Chen Andy on 16/2/23.
//  Copyright © 2016年 Chen Andy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DZRequest.h"

@class DZBannberView;

@protocol DZBannberViewDelegate <NSObject>
@optional
#pragma mark Ad Request Lifecycle Notifications

/// Tells the delegate that an ad request successfully received an ad. The delegate may want to add
/// the banner view to the view hierarchy if it hasn't been added yet.
- (void)adViewDidReceiveAd:(DZBannberView *)bannerView;

/// Tells the delegate that an ad request failed. The failure is normally due to network
/// connectivity or ad availablility (i.e., no fill).
- (void)adView:(DZBannberView *)bannerView didFailToReceiveAdWithError:(NSError *)error;

#pragma mark Click-Time Lifecycle Notifications

/// Tells the delegate that a full screen view will be presented in response to the user clicking on
/// an ad. The delegate may want to pause animations and time sensitive interactions.
- (void)adViewWillPresentScreen:(DZBannberView *)bannerView;

/// Tells the delegate that the full screen view will be dismissed.
- (void)adViewWillDismissScreen:(DZBannberView *)bannerView;

/// Tells the delegate that the full screen view has been dismissed. The delegate should restart
/// anything paused while handling adViewWillPresentScreen:.
- (void)adViewDidDismissScreen:(DZBannberView *)bannerView;

/// Tells the delegate that the user click will open another app, backgrounding the current
/// application. The standard UIApplicationDelegate methods, like applicationDidEnterBackground:,
/// are called immediately before this method is called.
- (void)adViewWillLeaveApplication:(DZBannberView *)bannerView;
@end


@interface DZBannberView : UIView
@property(nonatomic, weak)UIViewController *rootViewController;
@property(nonatomic, weak)id<DZBannberViewDelegate> delegate;
/// A Boolean value that determines whether autoloading of ads in the receiver is enabled. If
/// enabled, you do not need to call the request: method to load ads.
@property(nonatomic, assign, getter=isAutoloadEnabled)BOOL autoloadEnabled;
/// Makes an ad request. The request object supplies targeting information.
- (void)loadRequest:(DZRequest *)request;
@end
