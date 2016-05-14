/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNetworkerRequestDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBCancelable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>

@protocol OS_dispatch_queue;
@class FBUserSession, MNMessagingRegionHeaderHelper, NSObject, FBGraphRequest, FBSimpleNetworkerRequest, NSString;

@interface MNBballGameScoreSender : NSObject <FBNetworkerRequestDelegate, FBCancelable, FBClassProvidable> {

	FBUserSession* _session;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	NSObject*<OS_dispatch_queue> _queue;
	FBGraphRequest* _bballGameScoreSenderRequest;
	FBSimpleNetworkerRequest* _networkerRequest;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)setGameScoreForThread:(id)arg1 score:(int)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 messagingRegionHeaderHelper:(id)arg2 queue:(id)arg3 ;
-(void)_didFailWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

