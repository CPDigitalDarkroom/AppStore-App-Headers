/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNUserRequestHandling.h>

@class MNRemoteSingleUserRequestRunner, MNRemoteMultipleUserRequestRunner, FBNetworkActivityManager, NSString;

@interface MNRemoteUserRequestHandler : NSObject <MNUserRequestHandling> {

	MNRemoteSingleUserRequestRunner* _singleUserRequestHandler;
	MNRemoteMultipleUserRequestRunner* _multipleUserRequestHandler;
	/*^block*/id _userFetcherCreationBlock;
	FBNetworkActivityManager* _networkActivityManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithNextHandler:(id)arg1 ;
-(void)handleMultipleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(void)handleSingleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3 ;
-(id)initWithNetworkActivityManager:(id)arg1 userFetcherCreationBlock:(/*^block*/id)arg2 ;
@end

