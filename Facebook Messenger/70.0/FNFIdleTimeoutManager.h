/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSetIdleTimerApplicationProtocol;
@class NSHashTable;

@interface FNFIdleTimeoutManager : NSObject {

	NSHashTable* _clients;
	id<FBSetIdleTimerApplicationProtocol> _application;

}
+(id)sharedInstance;
-(void)addNonIdlingClient:(id)arg1 ;
-(void)removeNonIdlingClient:(id)arg1 ;
-(void)_setApplication:(id)arg1 ;
-(id)init;
@end

