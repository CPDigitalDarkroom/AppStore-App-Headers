/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject;

@interface FBLazyState : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id _lazyState;
	char _initialized;

}

@property (assign) char initialized;              //@synthesize initialized=_initialized - In the implementation block
-(id)init;
-(void)setInitialized:(char)arg1 ;
-(char)initialized;
@end

