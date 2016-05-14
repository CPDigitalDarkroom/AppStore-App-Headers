/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBAssetLocationInfo, NSDate, NSArray, NSDictionary;

@interface FBMagicStoryCollectionData : FBValueObject <NSCopying, NSCoding> {

	NSString* _uniqueId;
	NSString* _title;
	FBAssetLocationInfo* _locationInfo;
	NSDate* _latestAssetCreationDate;
	NSArray* _groupedCollectionAssetInfos;
	NSDictionary* _classifierLoggingData;
	double _classifierScore;

}

@property (nonatomic,copy,readonly) NSString * uniqueId;                                //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) FBAssetLocationInfo * locationInfo;                 //@synthesize locationInfo=_locationInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDate * latestAssetCreationDate;                   //@synthesize latestAssetCreationDate=_latestAssetCreationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupedCollectionAssetInfos;              //@synthesize groupedCollectionAssetInfos=_groupedCollectionAssetInfos - In the implementation block
@property (nonatomic,readonly) double classifierScore;                                  //@synthesize classifierScore=_classifierScore - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * classifierLoggingData;               //@synthesize classifierLoggingData=_classifierLoggingData - In the implementation block
-(id)initWithUniqueId:(id)arg1 title:(id)arg2 locationInfo:(id)arg3 latestAssetCreationDate:(id)arg4 groupedCollectionAssetInfos:(id)arg5 classifierScore:(double)arg6 classifierLoggingData:(id)arg7 ;
-(FBAssetLocationInfo *)locationInfo;
-(double)classifierScore;
-(NSDictionary *)classifierLoggingData;
-(NSDate *)latestAssetCreationDate;
-(NSArray *)groupedCollectionAssetInfos;
-(NSString *)title;
-(NSString *)uniqueId;
@end

