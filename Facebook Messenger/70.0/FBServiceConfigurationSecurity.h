/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBServiceConfigurationSecuring.h>

@class NSString;

@interface FBServiceConfigurationSecurity : NSObject <FBServiceConfigurationSecuring> {

	char _disableAccessTokenAuthentication;
	NSString* _accessTokenOverride_DEPRECATED;
	NSString* _actorFBID;

}

@property (nonatomic,copy,readonly) NSString * accessTokenOverride_DEPRECATED;              //@synthesize accessTokenOverride_DEPRECATED=_accessTokenOverride_DEPRECATED - In the implementation block
@property (nonatomic,readonly) char disableAccessTokenAuthentication;                       //@synthesize disableAccessTokenAuthentication=_disableAccessTokenAuthentication - In the implementation block
@property (nonatomic,copy,readonly) NSString * actorFBID;                                   //@synthesize actorFBID=_actorFBID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccessTokenOverride_DEPRECATED:(NSString *)arg1 ;
-(void)setActorFBID:(NSString *)arg1 ;
-(NSString *)accessTokenOverride_DEPRECATED;
-(NSString *)actorFBID;
-(void)setDisableAccessTokenAuthentication;
-(id)initWithAccessTokenOverride:(id)arg1 ;
-(char)disableAccessTokenAuthentication;
-(NSString *)description;
@end

