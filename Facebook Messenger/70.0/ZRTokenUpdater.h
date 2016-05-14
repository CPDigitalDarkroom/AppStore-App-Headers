/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/ZRCampaignDataFetcherDelegate.h>

@protocol FBProvider, ZRLoggedInUserId;
@class ZRApplicationState, ZRTokenCurrentNetwork, NSRecursiveLock, FBExponentialBackoffTimer, ZRCampaignDataFetcher, NSString;

@interface ZRTokenUpdater : NSObject <FBSessionClassProvidable, ZRCampaignDataFetcherDelegate> {

	id<FBProvider> _tokenFetcherProvider;
	ZRApplicationState* _zeroRatingState;
	ZRTokenCurrentNetwork* _network;
	NSRecursiveLock* _sharedZeroTokenDataLock;
	FBExponentialBackoffTimer* _backoffTimer;
	char _refreshPending;
	char _refreshAllowed;
	id<ZRLoggedInUserId> _loggedInUserId;
	ZRCampaignDataFetcher* _tokenFetcher;

}

@property (nonatomic,retain) id<ZRLoggedInUserId> loggedInUserId;               //@synthesize loggedInUserId=_loggedInUserId - In the implementation block
@property (nonatomic,retain) ZRCampaignDataFetcher * tokenFetcher;              //@synthesize tokenFetcher=_tokenFetcher - In the implementation block
@property (nonatomic,readonly) char refreshPending;                             //@synthesize refreshPending=_refreshPending - In the implementation block
@property (assign,nonatomic) char refreshAllowed;                               //@synthesize refreshAllowed=_refreshAllowed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(char)refreshPending;
-(char)refreshIfNeeded;
-(void)stopRefresh;
-(id<ZRLoggedInUserId>)loggedInUserId;
-(id)initWithTokenFetcherProvider:(id)arg1 zeroRatingState:(id)arg2 network:(id)arg3 loggedInUserId:(id)arg4 sharedZeroTokenDataLock:(id)arg5 backoffTimer:(id)arg6 ;
-(void)setRefreshAllowed:(char)arg1 ;
-(char)refreshIfPossible;
-(char)_refreshIfPossible;
-(void)_cancelFetch;
-(void)_didFetchZeroCampaign:(id)arg1 ;
-(ZRCampaignDataFetcher *)tokenFetcher;
-(void)setTokenFetcher:(ZRCampaignDataFetcher *)arg1 ;
-(void)didFetchZeroCampaign:(id)arg1 ;
-(void)couldNotFetchZeroCampaign:(id)arg1 ;
-(char)refreshAllowed;
-(void)setLoggedInUserId:(id<ZRLoggedInUserId>)arg1 ;
-(void)dealloc;
@end

