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

@class FBAThriftAnalyticsDeviceStatusSystemAndUserTime, NSMutableArray, NSString;

@interface FBAThriftAnalyticsDeviceStatusCPUTime : TBaseStruct <TBase, NSCoding> {

	long long __thrift_procTimeInMilliseconds;
	FBAThriftAnalyticsDeviceStatusSystemAndUserTime* __thrift_terminated;
	NSMutableArray* __thrift_alive;
	FBAThriftAnalyticsDeviceStatusSystemAndUserTime* __thrift_totalCPUTime;
	char __thrift_forCTScan;
	FBAThriftAnalyticsDeviceStatusSystemAndUserTime* __thrift_totalBackgroundCPUTime;
	char __thrift_procTimeInMilliseconds_set;
	char __thrift_terminated_set;
	char __thrift_alive_set;
	char __thrift_totalCPUTime_set;
	char __thrift_forCTScan_set;
	char __thrift_totalBackgroundCPUTime_set;

}

@property (assign,nonatomic) long long procTimeInMilliseconds; 
@property (nonatomic,retain) FBAThriftAnalyticsDeviceStatusSystemAndUserTime * terminated; 
@property (nonatomic,retain) NSMutableArray * alive; 
@property (nonatomic,retain) FBAThriftAnalyticsDeviceStatusSystemAndUserTime * totalCPUTime; 
@property (assign,nonatomic) char forCTScan; 
@property (nonatomic,retain) FBAThriftAnalyticsDeviceStatusSystemAndUserTime * totalBackgroundCPUTime; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)toDict;
-(void)setProcTimeInMilliseconds:(long long)arg1 ;
-(void)setTerminated:(FBAThriftAnalyticsDeviceStatusSystemAndUserTime *)arg1 ;
-(void)setAlive:(NSMutableArray *)arg1 ;
-(void)setTotalCPUTime:(FBAThriftAnalyticsDeviceStatusSystemAndUserTime *)arg1 ;
-(void)setForCTScan:(char)arg1 ;
-(void)setTotalBackgroundCPUTime:(FBAThriftAnalyticsDeviceStatusSystemAndUserTime *)arg1 ;
-(id)initWithProcTimeInMilliseconds:(long long)arg1 terminated:(id)arg2 alive:(NSMutableArray*)arg3 totalCPUTime:(id)arg4 forCTScan:(char)arg5 totalBackgroundCPUTime:(id)arg6 ;
-(long long)procTimeInMilliseconds;
-(char)procTimeInMillisecondsIsSet;
-(void)unsetProcTimeInMilliseconds;
-(char)terminatedIsSet;
-(void)unsetTerminated;
-(NSMutableArray *)alive;
-(char)aliveIsSet;
-(void)unsetAlive;
-(FBAThriftAnalyticsDeviceStatusSystemAndUserTime *)totalCPUTime;
-(char)totalCPUTimeIsSet;
-(void)unsetTotalCPUTime;
-(char)forCTScan;
-(char)forCTScanIsSet;
-(void)unsetForCTScan;
-(FBAThriftAnalyticsDeviceStatusSystemAndUserTime *)totalBackgroundCPUTime;
-(char)totalBackgroundCPUTimeIsSet;
-(void)unsetTotalBackgroundCPUTime;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
-(FBAThriftAnalyticsDeviceStatusSystemAndUserTime *)terminated;
@end

