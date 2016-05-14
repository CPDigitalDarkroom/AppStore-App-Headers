/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMQTTListenerManaging;
@class MNMQTTPersonSyncEventHandler, NSRunLoop, FBDeferredTimer;

@interface MNMQTTPresenceSubscriptionCoordinator : NSObject {

	id<MNMQTTListenerManaging> _listenerManager;
	MNMQTTPersonSyncEventHandler* _eventHandler;
	NSRunLoop* _runLoop;
	FBDeferredTimer* _unsubscribeTimer;

}
-(void)subscribeToFullPresenceTopic;
-(id)initWithListenerManager:(id)arg1 eventHandler:(id)arg2 runLoop:(id)arg3 ;
-(void)_unsubscribeFromFullPresenceTopic;
-(char)_eventHandlerManagesFullPresenceTopic;
@end

