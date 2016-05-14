/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface FBAccessTokenData : NSObject <NSCopying> {

	NSString* _accessToken;
	NSString* _appID;
	NSString* _userID;
	NSArray* _permissions;
	NSArray* _declinedPermissions;
	NSDate* _expirationDate;
	unsigned _loginType;
	NSDate* _refreshDate;
	NSDate* _permissionsRefreshDate;

}

@property (nonatomic,copy) NSDate * refreshDate;                          //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,copy) NSArray * permissions;                         //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSArray * declinedPermissions;                 //@synthesize declinedPermissions=_declinedPermissions - In the implementation block
@property (nonatomic,copy) NSString * appID;                              //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * userID;                             //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSDate * permissionsRefreshDate;               //@synthesize permissionsRefreshDate=_permissionsRefreshDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) unsigned loginType;                        //@synthesize loginType=_loginType - In the implementation block
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 expirationDate:(id)arg4 loginType:(unsigned)arg5 refreshDate:(id)arg6 permissionsRefreshDate:(id)arg7 appID:(id)arg8 userID:(id)arg9 ;
+(id)createTokenFromFacebookURL:(id)arg1 appID:(id)arg2 urlSchemeSuffix:(id)arg3 ;
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(unsigned)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6 appID:(id)arg7 ;
+(id)createTokenFromDictionary:(id)arg1 ;
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(unsigned)arg4 refreshDate:(id)arg5 ;
+(id)createTokenFromString:(id)arg1 permissions:(id)arg2 expirationDate:(id)arg3 loginType:(unsigned)arg4 refreshDate:(id)arg5 permissionsRefreshDate:(id)arg6 ;
-(unsigned)loginType;
-(id)initWithToken:(id)arg1 permissions:(id)arg2 declinedPermissions:(id)arg3 expirationDate:(id)arg4 loginType:(unsigned)arg5 refreshDate:(id)arg6 permissionsRefreshDate:(id)arg7 appID:(id)arg8 userID:(id)arg9 ;
-(char)isEqualToAccessTokenData:(id)arg1 ;
-(NSArray *)declinedPermissions;
-(NSDate *)refreshDate;
-(NSDate *)permissionsRefreshDate;
-(void)setDeclinedPermissions:(NSArray *)arg1 ;
-(void)setRefreshDate:(NSDate *)arg1 ;
-(void)setPermissionsRefreshDate:(NSDate *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(NSString *)accessToken;
-(NSArray *)permissions;
-(void)setPermissions:(NSArray *)arg1 ;
-(NSString *)appID;
@end

