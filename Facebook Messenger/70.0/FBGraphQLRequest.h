/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphRequest.h>

@class FBGraphQLQuery, NSString;

@interface FBGraphQLRequest : FBGraphRequest {

	char _useMultiPartForm;
	FBGraphQLQuery* _query;
	NSString* _queryID;

}

@property (nonatomic,copy,readonly) NSString * queryID;              //@synthesize queryID=_queryID - In the implementation block
@property (nonatomic,readonly) FBGraphQLQuery * query;               //@synthesize query=_query - In the implementation block
-(id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 ;
-(id)f_describeLevel:(unsigned)arg1 ;
-(id)initWithQuery:(id)arg1 callerClass:(Class)arg2 ;
-(id)initWithQuery:(id)arg1 queryName:(id)arg2 mutation:(char)arg3 callerClass:(Class)arg4 ;
-(void)setCallerContext:(id)arg1 ;
-(id)initWithQuery:(id)arg1 callerClass:(Class)arg2 objectFactory:(id)arg3 ;
-(id)analyticsName;
-(id)initWithQuery:(id)arg1 friendlyName:(id)arg2 mutation:(char)arg3 callerContext:(id)arg4 objectFactory:(id)arg5 ;
-(id)_initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 ;
-(void)copyMembersFromRequest:(id)arg1 withZone:(NSZone*)arg2 ;
-(char)useMultipartForm;
-(unsigned)compressionMethod;
-(id)description;
-(FBGraphQLQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFriendlyName:(id)arg1 ;
-(NSString *)queryID;
@end

