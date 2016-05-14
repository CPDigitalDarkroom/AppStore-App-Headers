/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBKeychainStore;

@interface FBSessionTokenCachingStrategy : NSObject {

	NSString* _accessTokenInformationKeyName;
	FBKeychainStore* _keychainStore;

}
+(id)nullCacheInstance;
+(char)isValidTokenInformation:(id)arg1 ;
+(id)defaultInstance;
-(id)fetchFBAccessTokenData;
-(void)clearToken;
-(void)cacheFBAccessTokenData:(id)arg1 ;
-(void)cacheTokenInformation:(id)arg1 ;
-(id)fetchTokenInformation;
-(id)initWithUserDefaultTokenInformationKeyName:(id)arg1 ;
-(id)userDefaultsKeyForKeychainValidation;
-(id)keychainStore;
-(void)overrideKeyChainStoreForTests:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

