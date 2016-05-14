/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBaseStruct.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAThriftAnalyticsDeviceStatusApplicationTimestamps : TBaseStruct <TBase, NSCoding> {

	long long __thrift_timeSinceInitInMilliseconds;
	long long __thrift_activeTimeSinceInitInMilliseconds;
	long long __thrift_backgroundTimeSinceInitInMilliseconds;
	char __thrift_timeSinceInitInMilliseconds_set;
	char __thrift_activeTimeSinceInitInMilliseconds_set;
	char __thrift_backgroundTimeSinceInitInMilliseconds_set;

}

@property (assign,nonatomic) long long timeSinceInitInMilliseconds; 
@property (assign,nonatomic) long long activeTimeSinceInitInMilliseconds; 
@property (assign,nonatomic) long long backgroundTimeSinceInitInMilliseconds; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)toDict;
-(void)setTimeSinceInitInMilliseconds:(long long)arg1 ;
-(void)setActiveTimeSinceInitInMilliseconds:(long long)arg1 ;
-(void)setBackgroundTimeSinceInitInMilliseconds:(long long)arg1 ;
-(id)initWithTimeSinceInitInMilliseconds:(long long)arg1 activeTimeSinceInitInMilliseconds:(long long)arg2 backgroundTimeSinceInitInMilliseconds:(long long)arg3 ;
-(long long)timeSinceInitInMilliseconds;
-(char)timeSinceInitInMillisecondsIsSet;
-(void)unsetTimeSinceInitInMilliseconds;
-(long long)activeTimeSinceInitInMilliseconds;
-(char)activeTimeSinceInitInMillisecondsIsSet;
-(void)unsetActiveTimeSinceInitInMilliseconds;
-(long long)backgroundTimeSinceInitInMilliseconds;
-(char)backgroundTimeSinceInitInMillisecondsIsSet;
-(void)unsetBackgroundTimeSinceInitInMilliseconds;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end

