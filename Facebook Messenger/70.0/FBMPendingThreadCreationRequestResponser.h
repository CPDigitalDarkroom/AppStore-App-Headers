/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FBMPendingThreadCreationRequestResponser : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id successBlock;                            //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy,readonly) id failureBlock;                            //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)initWithQueue:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)successBlock;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)failureBlock;
@end

