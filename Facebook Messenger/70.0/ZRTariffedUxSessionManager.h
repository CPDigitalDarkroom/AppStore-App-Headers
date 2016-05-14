/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/ZRTariffedUxSessionDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol NSLocking;
@class ZRTariffedUxSessionTombstone, NSMutableSet, NSMutableArray, ZRApplicationState, NSObject, NSString;

@interface ZRTariffedUxSessionManager : NSObject <ZRTariffedUxSessionDelegate, FBSessionClassProvidable> {

	ZRTariffedUxSessionTombstone* _lastInvalidatedSession;
	unsigned _activeSessionCount;
	NSMutableSet* _validSessionsInternal;
	NSMutableArray* _shownFences;
	ZRApplicationState* _zeroRatingState;
	NSObject*<NSLocking> _sharedZeroTokenDataLock;

}

@property (nonatomic,copy) NSMutableSet * validSessionsInternal;                                 //@synthesize validSessionsInternal=_validSessionsInternal - In the implementation block
@property (nonatomic,retain) NSMutableArray * shownFences;                                       //@synthesize shownFences=_shownFences - In the implementation block
@property (nonatomic,retain) ZRApplicationState * zeroRatingState;                               //@synthesize zeroRatingState=_zeroRatingState - In the implementation block
@property (nonatomic,retain) ZRTariffedUxSessionTombstone * lastInvalidatedSession;              //@synthesize lastInvalidatedSession=_lastInvalidatedSession - In the implementation block
@property (nonatomic,retain) NSObject*<NSLocking> sharedZeroTokenDataLock;                       //@synthesize sharedZeroTokenDataLock=_sharedZeroTokenDataLock - In the implementation block
@property (nonatomic,readonly) unsigned activeSessionCount;                                      //@synthesize activeSessionCount=_activeSessionCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(ZRApplicationState *)zeroRatingState;
-(id)invalidSessionNamed:(id)arg1 filter:(id)arg2 ;
-(void)setZeroRatingState:(ZRApplicationState *)arg1 ;
-(char)enterTariffedSessionWith:(/*^block*/id)arg1 throughFence:(id)arg2 ;
-(void)sessionDidValidate:(id)arg1 ;
-(void)sessionDidInvalidate:(id)arg1 ;
-(id)initWithSharedZeroTokenDataLock:(id)arg1 zeroRatingState:(id)arg2 ;
-(unsigned)validSessionCount;
-(void)setLastInvalidatedSession:(ZRTariffedUxSessionTombstone *)arg1 ;
-(id)validSessions;
-(char)isUserInTariffedSession;
-(ZRTariffedUxSessionTombstone *)lastInvalidatedSession;
-(unsigned)activeSessionCount;
-(NSMutableSet *)validSessionsInternal;
-(void)setValidSessionsInternal:(NSMutableSet *)arg1 ;
-(NSMutableArray *)shownFences;
-(void)setShownFences:(NSMutableArray *)arg1 ;
-(NSObject*<NSLocking>)sharedZeroTokenDataLock;
-(void)setSharedZeroTokenDataLock:(NSObject*<NSLocking>)arg1 ;
-(void)dealloc;
@end

