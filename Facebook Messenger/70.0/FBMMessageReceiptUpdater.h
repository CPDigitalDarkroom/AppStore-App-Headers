/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadMessageSubscribing.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol MNAuthenticationManager, MNThreadSummaryCacheReading, FBClock;
@class MNThreadUpdateService, NSString;

@interface FBMMessageReceiptUpdater : NSObject <MNThreadMessageSubscribing, FBSessionClassProvidable> {

	id<MNAuthenticationManager> _authManager;
	MNThreadUpdateService* _threadUpdateService;
	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	id<FBClock> _clock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)updateReadReceiptsFromTypingState:(char)arg1 hasPendingMessage:(char)arg2 lastMessageTimestamp:(unsigned long long)arg3 forThreadSummary:(id)arg4 ;
-(void)updateReadReceiptWithTimestamp:(unsigned long long)arg1 forUserId:(id)arg2 onThreadKey:(id)arg3 ;
-(void)updateDeliveryReceiptWithTimestamp:(unsigned long long)arg1 forUserId:(id)arg2 onThreadKey:(id)arg3 ;
-(id)initWithAuthManager:(id)arg1 threadUpdateService:(id)arg2 threadSummaryCacheReader:(id)arg3 threadMessageSubscribingAnnouncer:(id)arg4 clock:(id)arg5 ;
-(void)updateReadReceiptsFromMessages:(id)arg1 forThreadSummary:(id)arg2 ;
@end

