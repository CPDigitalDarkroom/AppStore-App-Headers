/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTCallability : NSObject <TBase, NSCoding> {

	long long __thrift_userId;
	char __thrift_has_permission;
	char __thrift_is_callable_mobile;
	char __thrift_is_callable_webrtc;
	int __thrift_reason_code;
	char __thrift_userId_set;
	char __thrift_has_permission_set;
	char __thrift_is_callable_mobile_set;
	char __thrift_is_callable_webrtc_set;
	char __thrift_reason_code_set;

}

@property (assign,nonatomic) long long userId; 
@property (assign,nonatomic) char has_permission; 
@property (assign,nonatomic) char is_callable_mobile; 
@property (assign,nonatomic) char is_callable_webrtc; 
@property (assign,nonatomic) int reason_code; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(char)is_callable_mobile;
-(char)is_callable_webrtc;
-(char)has_permission;
-(int)reason_code;
-(void)setHas_permission:(char)arg1 ;
-(void)setIs_callable_mobile:(char)arg1 ;
-(void)setIs_callable_webrtc:(char)arg1 ;
-(void)setReason_code:(int)arg1 ;
-(id)initWithUserId:(long long)arg1 has_permission:(char)arg2 is_callable_mobile:(char)arg3 is_callable_webrtc:(char)arg4 reason_code:(int)arg5 ;
-(char)userIdIsSet;
-(void)unsetUserId;
-(char)has_permissionIsSet;
-(void)unsetHas_permission;
-(char)is_callable_mobileIsSet;
-(void)unsetIs_callable_mobile;
-(char)is_callable_webrtcIsSet;
-(void)unsetIs_callable_webrtc;
-(char)reason_codeIsSet;
-(void)unsetReason_code;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)write:(id)arg1 ;
-(void)setUserId:(long long)arg1 ;
-(long long)userId;
@end

