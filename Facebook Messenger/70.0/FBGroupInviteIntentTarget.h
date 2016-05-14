/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBIntentTarget.h>

@class NSString, FBMemPerson;

@interface FBGroupInviteIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _name;
	NSString* _entryPoint;

}

@property (nonatomic,readonly) FBMemPerson * invitee; 
@property (nonatomic,copy,readonly) NSString * FBID;                    //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryPoint;              //@synthesize entryPoint=_entryPoint - In the implementation block
+(id)groupInviteTargetWithFBID:(id)arg1 name:(id)arg2 entryPoint:(id)arg3 ;
+(id)groupInviteTargetWithInvitee:(id)arg1 entryPoint:(id)arg2 ;
-(NSString *)FBID;
-(FBMemPerson *)invitee;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(NSString *)entryPoint;
@end

