/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNetworkerRequest.h>

@class FBUserSession, NSString, NSArray;

@interface FBSimpleSearchTypeaheadRequest : FBNetworkerRequest {

	FBUserSession* _session;
	NSString* _searchSessionID;
	NSString* _queryString;
	unsigned _maxResultCount;
	unsigned _filterType;
	NSString* _context;
	unsigned _profilePictureSize;
	NSArray* _pageCategories;

}

@property (nonatomic,readonly) FBUserSession * session;                      //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchSessionID;              //@synthesize searchSessionID=_searchSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;                  //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,readonly) unsigned maxResultCount;                      //@synthesize maxResultCount=_maxResultCount - In the implementation block
@property (assign,nonatomic) unsigned filterType;                            //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy) NSString * context;                               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned profilePictureSize;                    //@synthesize profilePictureSize=_profilePictureSize - In the implementation block
@property (nonatomic,copy) NSArray * pageCategories;                         //@synthesize pageCategories=_pageCategories - In the implementation block
-(unsigned)profilePictureSize;
-(id)networkRequest;
-(id)initWithCallbackPerformer:(id)arg1 session:(id)arg2 searchSessionID:(id)arg3 context:(id)arg4 queryString:(id)arg5 maxResultCount:(unsigned)arg6 ;
-(void)setProfilePictureSize:(unsigned)arg1 ;
-(id)_filterString;
-(id)_pageCategoriesString;
-(NSString *)searchSessionID;
-(NSArray *)pageCategories;
-(void)setPageCategories:(NSArray *)arg1 ;
-(FBUserSession *)session;
-(NSString *)context;
-(unsigned)filterType;
-(void)setContext:(NSString *)arg1 ;
-(void)setFilterType:(unsigned)arg1 ;
-(NSString *)queryString;
-(unsigned)maxResultCount;
@end

