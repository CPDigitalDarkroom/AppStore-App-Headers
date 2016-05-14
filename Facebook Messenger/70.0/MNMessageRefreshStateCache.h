/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMCustomDictionaryStoreDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessageRefreshNetworkRunnerListening.h>

@protocol OS_dispatch_queue;
@class FBMCustomDictionaryStore, NSObject, NSDictionary, NSString;

@interface MNMessageRefreshStateCache : NSObject <FBMCustomDictionaryStoreDelegate, MNMessageRefreshNetworkRunnerListening> {

	FBMCustomDictionaryStore* _diskHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _messageIdsByThreadKey;

}

@property (copy) NSDictionary * messageIdsByThreadKey;              //@synthesize messageIdsByThreadKey=_messageIdsByThreadKey - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageRefreshNetworkRunnerDidFetchMesssage:(id)arg1 ;
-(void)messageRefreshNetworkRunnerDidFailToFetchMessageWithId:(id)arg1 onThreadWithKey:(id)arg2 dueToError:(id)arg3 ;
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
-(void)setMessageIdsByThreadKey:(NSDictionary *)arg1 ;
-(NSDictionary *)messageIdsByThreadKey;
-(void)_updateMessageIdsAndScheduleSaveForThreadWithKey:(id)arg1 withUpdateBlock:(/*^block*/id)arg2 ;
-(void)_scheduleSaveToDisk;
-(id)getAllMessageIdsNeedingRefreshForThreadKey:(id)arg1 ;
-(void)markNeedsRefreshForMessagesWithIds:(id)arg1 onThreadWithKey:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
@end

