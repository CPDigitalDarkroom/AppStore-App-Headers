/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNServiceControllable.h>

@protocol FBProvider;
@class FBUserSession, NSString;

@interface MNLoomService : NSObject <MNServiceControllable> {

	FBUserSession* _session;
	id<FBProvider> _userInfoManagerProvider;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateLoomOrchestratorWithCurrentSession;
-(void)_updateLoomOrchestratorWithInvalidSession;
-(void)_sessionDidChange:(id)arg1 ;
-(void)_sessionWillInvalidate:(id)arg1 ;
-(id)initWithSession:(id)arg1 loggedInUserInfoManagerProvider:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end

