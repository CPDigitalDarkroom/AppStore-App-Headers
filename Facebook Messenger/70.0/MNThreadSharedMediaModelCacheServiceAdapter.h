/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>

@protocol OS_dispatch_queue, MNThreadMessageSubscribing;
@class FBMThreadSharedMediaModelCache, MNThreadMessageSubscribingAnnouncer, NSObject, NSString;

@interface MNThreadSharedMediaModelCacheServiceAdapter : NSObject <MNServiceControllable> {

	FBMThreadSharedMediaModelCache* _threadSharedMediaModelCache;
	MNThreadMessageSubscribingAnnouncer* _messageSubscribingAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNThreadMessageSubscribing> _queueDispatchedCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithThreadSharedMediaModelCache:(id)arg1 messageSubscribingAnnouncer:(id)arg2 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

