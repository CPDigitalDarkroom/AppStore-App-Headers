/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBIntentTarget.h>

@class NSString, NSArray;

@interface FBNegativeFeedbackIntentTarget : FBIntentTarget {

	NSString* _reportableContentGraphQLID;
	NSString* _location;
	NSArray* _trackingCodes;

}

@property (nonatomic,copy,readonly) NSString * reportableContentGraphQLID;              //@synthesize reportableContentGraphQLID=_reportableContentGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                            //@synthesize trackingCodes=_trackingCodes - In the implementation block
+(id)negativeFeedbackIntentTargetWithReportableContentGraphQLID:(id)arg1 location:(id)arg2 trackingCodes:(id)arg3 ;
-(id)fallbackURLs;
-(NSArray *)trackingCodes;
-(NSString *)reportableContentGraphQLID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)location;
@end

