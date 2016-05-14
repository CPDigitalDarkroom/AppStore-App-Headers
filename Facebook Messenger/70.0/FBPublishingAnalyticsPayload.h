/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString;

@interface FBPublishingAnalyticsPayload : FBValueObject <NSCopying, NSCoding> {

	NSDictionary* _extraDataToIncludeInPublishEvent;
	NSDictionary* _extraDataToIncludeInPublishFailureEvent;
	NSString* _feedbackSource;

}

@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInPublishEvent;                     //@synthesize extraDataToIncludeInPublishEvent=_extraDataToIncludeInPublishEvent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraDataToIncludeInPublishFailureEvent;              //@synthesize extraDataToIncludeInPublishFailureEvent=_extraDataToIncludeInPublishFailureEvent - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedbackSource;                                           //@synthesize feedbackSource=_feedbackSource - In the implementation block
-(id)initWithExtraDataToIncludeInPublishEvent:(id)arg1 extraDataToIncludeInPublishFailureEvent:(id)arg2 feedbackSource:(id)arg3 ;
-(NSDictionary *)extraDataToIncludeInPublishEvent;
-(NSDictionary *)extraDataToIncludeInPublishFailureEvent;
-(NSString *)feedbackSource;
@end

