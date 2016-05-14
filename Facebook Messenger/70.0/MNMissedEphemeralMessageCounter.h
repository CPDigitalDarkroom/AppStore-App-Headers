/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadMessageSubscribing.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMissedEphemeralMessageCounting.h>

@protocol MNThreadSummaryCaching, OS_dispatch_queue;
@class FBUserSession, NSObject, NSMutableDictionary, NSDictionary, NSString;

@interface MNMissedEphemeralMessageCounter : NSObject <MNThreadMessageSubscribing, MNMissedEphemeralMessageCounting> {

	FBUserSession* _session;
	id<MNThreadSummaryCaching> _threadSummaryCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _threadMessageTimestampByThreadKey;
	NSDictionary* _missedEphemeralMessageCountByThreadKey;

}

@property (copy) NSDictionary * missedEphemeralMessageCountByThreadKey;              //@synthesize missedEphemeralMessageCountByThreadKey=_missedEphemeralMessageCountByThreadKey - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)_resetCounterForThread:(id)arg1 ;
-(void)_applyMessageUpdates:(id)arg1 threadKey:(id)arg2 ;
-(void)_addEphemeralMessage:(id)arg1 toThread:(id)arg2 ;
-(void)_deleteMessage:(id)arg1 fromThread:(id)arg2 ;
-(void)_markMissedMessageForThread:(id)arg1 ;
-(void)setMissedEphemeralMessageCountByThreadKey:(NSDictionary *)arg1 ;
-(unsigned)numberOfMissedEphmeralMessageForThreadKey:(id)arg1 ;
-(void)resetMissedEphemeralMessageCounterForThreadKey:(id)arg1 ;
-(id)initWithSession:(id)arg1 threadSummaryCache:(id)arg2 queue:(id)arg3 ;
-(NSDictionary *)missedEphemeralMessageCountByThreadKey;
-(NSObject*<OS_dispatch_queue>)queue;
@end

