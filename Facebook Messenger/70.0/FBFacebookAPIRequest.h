/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNetworkRequest.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBDuplicatedFacebookAPIProperties.h>

@class NSString, FBGraphRequest;

@interface FBFacebookAPIRequest : FBNetworkRequest <FBDuplicatedFacebookAPIProperties> {

	char _useZeroRatedHost;
	char _useSecureTierHost;
	NSString* _actorFBID;
	NSString* _accessTokenOverride_DEPRECATED;

}

@property (assign,nonatomic) char useZeroRatedHost;                                //@synthesize useZeroRatedHost=_useZeroRatedHost - In the implementation block
@property (assign,nonatomic) char useSecureTierHost;                               //@synthesize useSecureTierHost=_useSecureTierHost - In the implementation block
@property (nonatomic,readonly) FBGraphRequest * requestForUDPPriming; 
@property (nonatomic,copy) NSString * actorFBID;                                   //@synthesize actorFBID=_actorFBID - In the implementation block
@property (nonatomic,copy) NSString * accessTokenOverride_DEPRECATED;              //@synthesize accessTokenOverride_DEPRECATED=_accessTokenOverride_DEPRECATED - In the implementation block
+(void)configureWithAppSecret:(id)arg1 appVersion:(id)arg2 ;
-(void)setAccessTokenOverride_DEPRECATED:(NSString *)arg1 ;
-(void)setUseZeroRatedHost:(char)arg1 ;
-(void)setActorFBID:(NSString *)arg1 ;
-(NSString *)accessTokenOverride_DEPRECATED;
-(id)generateRequest;
-(NSString *)actorFBID;
-(FBGraphRequest *)requestForUDPPriming;
-(char)useZeroRatedHost;
-(id)methodForSignature;
-(void)setRequestUUID:(id)arg1 ;
-(char)useMultipartForm;
-(char)useSecureTierHost;
-(void)setUseSecureTierHost:(char)arg1 ;
-(unsigned)compressionMethod;
-(id)init;
-(id)host;
-(id)parameters;
-(id)httpMethod;
-(id)relativePath;
@end

