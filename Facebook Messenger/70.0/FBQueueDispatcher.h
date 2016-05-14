/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_queue;
@class NSObject, Protocol;

@interface FBQueueDispatcher : NSProxy {

	id _listener;
	NSObject*<OS_dispatch_queue> _performer;
	Protocol* _protocol;
	id _weakListener;

}
-(id)initWithListener:(id)arg1 protocol:(id)arg2 queueToNotifyListenerOn:(id)arg3 listenerMemorySemantic:(unsigned)arg4 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

