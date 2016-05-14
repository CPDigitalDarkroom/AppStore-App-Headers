/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBReachabilityListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, FBFontResourceBundle, NSString;

@interface MNEmojiFontService : NSObject <FBReachabilityListener, MNServiceControllable> {

	FBUserSession* _session;
	FBFontResourceBundle* _fontBundle;
	char _fontFetchInProgress;
	id<FBServiceTransactionMutating> _fontQueryToken;
	unsigned _reachabilityState;
	char _serviceRunning;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didChangeCurrentSession:(id)arg1 ;
-(void)_setUpMessengerEmojiFontEligibility;
-(void)_fetchMessengerEmojiFontIfNeeded;
-(void)_unloadFont;
-(char)_isMessengerEmojiFontEnabled;
-(char)_isFontFetchNeeded;
-(void)_fontResource:(id)arg1 isCached:(char)arg2 ;
-(void)_fontManagerFetchFontResource:(id)arg1 ;
-(void)_fetchMessengerFontDataFromGraphQL;
-(void)_didRecieveGraphQLMessengerEmojiFontSuccess:(id)arg1 ;
-(void)_didRecieveGraphQLMessengerEmojiFontFailure:(id)arg1 ;
-(void)_fontManagerDidFailToFetchFont:(id)arg1 ;
-(void)_fontManagerDidFetchFont:(id)arg1 ;
-(void)_onReachabilityStateChangedToState:(unsigned)arg1 ;
-(void)reachabilityStateChangedTo:(unsigned)arg1 from:(unsigned)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
-(char)_isNetworkReachable;
@end

