/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface SRFaceRecognitionCache : NSObject <NSCoding> {

	NSDictionary* _recognitionResultSetByAssetIdentifier;
	NSDictionary* _uuidSetByAssetIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * recognitionResultSetByAssetIdentifier;              //@synthesize recognitionResultSetByAssetIdentifier=_recognitionResultSetByAssetIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * uuidSetByAssetIdentifier;                           //@synthesize uuidSetByAssetIdentifier=_uuidSetByAssetIdentifier - In the implementation block
+(id)cacheFromExistingCache:(id)arg1 mergingRecognitionResultSetByAssetIdentifier:(id)arg2 ;
+(id)_uuidSetFromRecogitionResultSetByAssetIdentifier:(id)arg1 ;
-(NSDictionary *)uuidSetByAssetIdentifier;
-(id)initWithRecognitionResultSetByAssetIdentifier:(id)arg1 ;
-(NSDictionary *)recognitionResultSetByAssetIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

