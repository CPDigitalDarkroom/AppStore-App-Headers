/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBCallPath.h>

@protocol FBCallPath;
@class NSString;

@interface FBCallPathSegmentHolderBase : NSObject <FBCallPath> {

	NSString* _analyticsTag;
	NSString* _moduleAnalyticsTag;
	NSString* _featureTag;
	id<FBCallPath> _parent;

}

@property (nonatomic,readonly) id<FBCallPath> parent;                           //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * analyticsTag;                    //@synthesize analyticsTag=_analyticsTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * moduleAnalyticsTag;              //@synthesize moduleAnalyticsTag=_moduleAnalyticsTag - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureTag;                      //@synthesize featureTag=_featureTag - In the implementation block
-(id)computeCallPath;
-(NSString *)analyticsTag;
-(NSString *)moduleAnalyticsTag;
-(NSString *)featureTag;
-(id)segmentString;
-(id)initWithParent:(id)arg1 analyticsTag:(id)arg2 moduleAnalyticsTag:(id)arg3 featureTag:(id)arg4 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<FBCallPath>)parent;
@end

