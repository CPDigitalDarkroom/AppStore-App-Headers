/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBConnectionPageProtocol.h>

@class NSArray, FBGraphQLConnectionStorePageInfo, NSDate, NSString;

@interface FBGraphQLConnectionStorePersistedPage : NSObject <NSCoding, FBConnectionPageProtocol> {

	NSArray* _edges;
	FBGraphQLConnectionStorePageInfo* _pageInfo;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) NSArray * edges;                                     //@synthesize edges=_edges - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionStorePageInfo * pageInfo;              //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBGraphQLConnectionStorePageInfo *)pageInfo;
-(id)initWithEdges:(id)arg1 pageInfo:(id)arg2 timestamp:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSDate *)timestamp;
-(NSArray *)edges;
@end

