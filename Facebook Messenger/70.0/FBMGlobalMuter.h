/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNetworkerRequestDelegate.h>

@protocol FBMGlobalMuterDelegate;
@class FBSimpleNetworkerRequest, FBUserSession, NSString;

@interface FBMGlobalMuter : NSObject <FBNetworkerRequestDelegate> {

	FBSimpleNetworkerRequest* _restRequest;
	FBUserSession* _session;
	id<FBMGlobalMuterDelegate> _delegate;
	long long _muteUntil;

}

@property (assign,nonatomic) long long muteUntil;                              //@synthesize muteUntil=_muteUntil - In the implementation block
@property (assign,nonatomic) id<FBMGlobalMuterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(long long)muteUntil;
-(void)setMuteUntil:(long long)arg1 ;
-(id)initWithMuteUntil:(long long)arg1 delegate:(id)arg2 userSession:(id)arg3 ;
-(void)cancel;
-(void)setDelegate:(id<FBMGlobalMuterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMGlobalMuterDelegate>)delegate;
-(void)start;
@end

