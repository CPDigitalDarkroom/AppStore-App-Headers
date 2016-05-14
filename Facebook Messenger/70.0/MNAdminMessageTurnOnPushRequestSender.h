/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMReachabilityAwareNetworkerDelegate.h>

@protocol FBNetworkDispatch;
@class FBSimpleNetworkerRequest, NSString, FBMReachabilityAwareNetworker;

@interface MNAdminMessageTurnOnPushRequestSender : NSObject <FBMReachabilityAwareNetworkerDelegate> {

	FBSimpleNetworkerRequest* _request;
	id<FBNetworkDispatch> _networkDispatcher;
	NSString* _recipientFBId;
	char _isSending;
	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(char)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithNetworkDispatcher:(id)arg1 recipient:(id)arg2 ;
-(void)_cleanup;
-(void)send;
@end

