/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSMutableDictionary, NSObject;

@interface FBServiceResponseAccumulator : NSObject {

	NSMutableDictionary* _responses;
	mutex _lock;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	unsigned _count;

}

@property (nonatomic,readonly) unsigned count;              //@synthesize count=_count - In the implementation block
-(id)initWithCount:(unsigned)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)receivedResponse:(id)arg1 forKey:(id)arg2 ;
-(unsigned)count;
-(id)description;
@end

