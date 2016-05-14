/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNContactsSyncLock.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol FBNetworkDispatch;
@class MNContactsSyncLockDelegateAnnouncer, FBUserSession, MNUserSettings, FBSimpleNetworkerRequest, NSString;

@interface MNGraphGlobalContactsSyncLock : NSObject <MNContactsSyncLock, FBSessionClassProvidable> {

	MNContactsSyncLockDelegateAnnouncer* _delegateAnnouncer;
	id<FBNetworkDispatch> _networker;
	FBUserSession* _session;
	MNUserSettings* _userSettings;
	FBSimpleNetworkerRequest* _currentRequest;

}

@property (nonatomic,retain) MNContactsSyncLockDelegateAnnouncer * delegateAnnouncer;              //@synthesize delegateAnnouncer=_delegateAnnouncer - In the implementation block
@property (nonatomic,retain) id<FBNetworkDispatch> networker;                                      //@synthesize networker=_networker - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                                        //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) FBSimpleNetworkerRequest * currentRequest;                            //@synthesize currentRequest=_currentRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)turnOffWithCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(void)_contactsSyncLockValueChanged:(id)arg1 ;
-(id)initWithSession:(id)arg1 userSettings:(id)arg2 ;
-(id)_setLockValueTo:(char)arg1 completionHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)turnOnWithCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(MNContactsSyncLockDelegateAnnouncer *)delegateAnnouncer;
-(void)setDelegateAnnouncer:(MNContactsSyncLockDelegateAnnouncer *)arg1 ;
-(id<FBNetworkDispatch>)networker;
-(void)setNetworker:(id<FBNetworkDispatch>)arg1 ;
-(void)setCurrentRequest:(FBSimpleNetworkerRequest *)arg1 ;
-(FBUserSession *)session;
-(void)dealloc;
-(FBSimpleNetworkerRequest *)currentRequest;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(MNUserSettings *)userSettings;
@end

