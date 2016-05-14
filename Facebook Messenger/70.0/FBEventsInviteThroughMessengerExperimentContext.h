/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@class NSString;

@interface FBEventsInviteThroughMessengerExperimentContext : FBExperimentContext {

	char _show_invite;
	char _showInvite;
	NSString* _invite_string;
	int _invite_limit;

}

@property (assign,nonatomic) char showInvite;                              //@synthesize showInvite=_showInvite - In the implementation block
@property (nonatomic,readonly) char show_invite;                           //@synthesize show_invite=_show_invite - In the implementation block
@property (nonatomic,copy,readonly) NSString * invite_string;              //@synthesize invite_string=_invite_string - In the implementation block
@property (nonatomic,readonly) int invite_limit;                           //@synthesize invite_limit=_invite_limit - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(char)show_invite;
-(NSString *)invite_string;
-(int)invite_limit;
-(char)showInvite;
-(void)setShowInvite:(char)arg1 ;
@end

