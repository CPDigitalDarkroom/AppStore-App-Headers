/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/ZRFenceBase.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBZeroRatingInterstitialWebViewControllerDelegate.h>

@protocol FBZeroRatingFenceNavigationDelegate;
@class ZRApplicationState, NSURL, NSString;

@interface FBZeroRatingWebViewFence : ZRFenceBase <FBZeroRatingInterstitialWebViewControllerDelegate> {

	ZRApplicationState* _zeroRatingState;
	NSURL* _url;
	id<FBZeroRatingFenceNavigationDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)upsellInterstitial:(id)arg1 exitedSuccessfully:(char)arg2 ;
-(id)initWithZeroRatingState:(id)arg1 session:(id)arg2 url:(id)arg3 delegate:(id)arg4 ;
-(void)show;
@end

