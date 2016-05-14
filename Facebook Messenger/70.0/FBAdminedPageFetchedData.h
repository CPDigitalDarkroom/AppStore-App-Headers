/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBAccessToken;

@interface FBAdminedPageFetchedData : FBValueObject <NSCopying> {

	NSString* _pageFBID;
	NSString* _pageName;
	FBAccessToken* _accessToken;
	unsigned _permissions;

}

@property (nonatomic,copy,readonly) NSString * pageFBID;                      //@synthesize pageFBID=_pageFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                      //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) FBAccessToken * accessToken;              //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) unsigned permissions;                          //@synthesize permissions=_permissions - In the implementation block
-(NSString *)pageName;
-(NSString *)pageFBID;
-(id)initWithPageFBID:(id)arg1 pageName:(id)arg2 accessToken:(id)arg3 permissions:(unsigned)arg4 ;
-(FBAccessToken *)accessToken;
-(unsigned)permissions;
@end

