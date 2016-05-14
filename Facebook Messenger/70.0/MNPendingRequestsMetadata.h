/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPendingRequestsMetadata : FBValueObject <NSCopying> {

	unsigned _numberOfUnreadPendingRequests;
	unsigned _numberOfFilteredRequests;
	NSString* _pendingRequestsSnippet;

}

@property (nonatomic,readonly) unsigned numberOfUnreadPendingRequests;              //@synthesize numberOfUnreadPendingRequests=_numberOfUnreadPendingRequests - In the implementation block
@property (nonatomic,readonly) unsigned numberOfFilteredRequests;                   //@synthesize numberOfFilteredRequests=_numberOfFilteredRequests - In the implementation block
@property (nonatomic,copy,readonly) NSString * pendingRequestsSnippet;              //@synthesize pendingRequestsSnippet=_pendingRequestsSnippet - In the implementation block
-(unsigned)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(NSString *)pendingRequestsSnippet;
-(unsigned)numberOfUnreadPendingRequests;
-(unsigned)numberOfFilteredRequests;
-(id)initWithNumberOfUnreadPendingRequests:(unsigned)arg1 numberOfFilteredRequests:(unsigned)arg2 pendingRequestsSnippet:(id)arg3 ;
@end

