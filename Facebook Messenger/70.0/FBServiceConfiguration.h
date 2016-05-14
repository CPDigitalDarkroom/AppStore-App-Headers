/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBServiceConfiguring.h>

@class FBServiceConfigurationCore, FBServiceConfigurationSecurity, FBServiceConfigurationTransport, FBServiceConfigurationRequest, NSString;

@interface FBServiceConfiguration : NSObject <FBServiceConfiguring> {

	FBServiceConfigurationCore* _core;
	FBServiceConfigurationSecurity* _security;
	FBServiceConfigurationTransport* _transport;
	FBServiceConfigurationRequest* _request;

}

@property (nonatomic,readonly) FBServiceConfigurationCore * core;                        //@synthesize core=_core - In the implementation block
@property (nonatomic,readonly) FBServiceConfigurationSecurity * security;                //@synthesize security=_security - In the implementation block
@property (nonatomic,readonly) FBServiceConfigurationTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) FBServiceConfigurationRequest * request;                  //@synthesize request=_request - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
-(FBServiceConfigurationCore *)core;
-(id)initWithCore:(id)arg1 security:(id)arg2 transport:(id)arg3 request:(id)arg4 ;
-(NSString *)description;
-(FBServiceConfigurationRequest *)request;
-(FBServiceConfigurationTransport *)transport;
-(FBServiceConfigurationSecurity *)security;
@end

