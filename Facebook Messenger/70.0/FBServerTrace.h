/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBServerTrace : NSObject {

	char _sampled;
	char _chosenToBeSampledPostCreation;
	NSString* _serverTraceID;
	NSString* _traceDescription;
	int _samplingRate;
	unsigned long long _traceThreshold;

}

@property (assign,nonatomic) char chosenToBeSampledPostCreation;               //@synthesize chosenToBeSampledPostCreation=_chosenToBeSampledPostCreation - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverTraceID;                  //@synthesize serverTraceID=_serverTraceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * traceDescription;               //@synthesize traceDescription=_traceDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long traceThreshold;              //@synthesize traceThreshold=_traceThreshold - In the implementation block
@property (nonatomic,readonly) char sampled;                                   //@synthesize sampled=_sampled - In the implementation block
@property (nonatomic,readonly) int samplingRate;                               //@synthesize samplingRate=_samplingRate - In the implementation block
-(void)setChosenToBeSampledPostCreation:(char)arg1 ;
-(char)chosenToBeSampledPostCreation;
-(char)sampled;
-(id)initWithServerTraceID:(id)arg1 description:(id)arg2 threshold:(unsigned long long)arg3 sampled:(char)arg4 samplingRate:(int)arg5 ;
-(unsigned long long)traceThreshold;
-(NSString *)traceDescription;
-(NSString *)serverTraceID;
-(int)samplingRate;
@end

