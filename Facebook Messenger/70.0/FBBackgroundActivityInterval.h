/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface FBBackgroundActivityInterval : FBValueObject <NSCopying> {

	NSDate* _intervalStartTime;
	NSDate* _intervalEndTime;
	double _timeSpentInInterval;

}

@property (nonatomic,readonly) double timeSpentInInterval;                   //@synthesize timeSpentInInterval=_timeSpentInInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDate * intervalStartTime;              //@synthesize intervalStartTime=_intervalStartTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * intervalEndTime;                //@synthesize intervalEndTime=_intervalEndTime - In the implementation block
-(id)initWithTimeSpentInInterval:(double)arg1 intervalStartTime:(id)arg2 intervalEndTime:(id)arg3 ;
-(double)timeSpentInInterval;
-(NSDate *)intervalStartTime;
-(NSDate *)intervalEndTime;
@end

