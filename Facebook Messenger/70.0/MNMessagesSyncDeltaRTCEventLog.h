/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSString;

@interface MNMessagesSyncDeltaRTCEventLog : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	char __answered;
	long long __startTime;
	long long __duration;
	int __eventType;
	char __acknowledged;
	char __messageMetadata_isset;
	char __answered_isset;
	char __startTime_isset;
	char __duration_isset;
	char __eventType_isset;
	char __acknowledged_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (assign,setter=setAnswered:,getter=answered,nonatomic) char answered; 
@property (assign,setter=setStartTime:,getter=startTime,nonatomic) long long startTime; 
@property (assign,setter=setDuration:,getter=duration,nonatomic) long long duration; 
@property (assign,setter=setEventType:,getter=eventType,nonatomic) int eventType; 
@property (assign,setter=setAcknowledged:,getter=acknowledged,nonatomic) char acknowledged; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(char)messageMetadataIsSet;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(void)unsetMessageMetadata;
-(id)initWithMessageMetadata:(id)arg1 answered:(char)arg2 startTime:(long long)arg3 duration:(long long)arg4 eventType:(int)arg5 acknowledged:(char)arg6 ;
-(char)answeredIsSet;
-(void)unsetAnswered;
-(char)startTimeIsSet;
-(void)unsetStartTime;
-(char)durationIsSet;
-(void)unsetDuration;
-(char)eventTypeIsSet;
-(void)unsetEventType;
-(char)acknowledgedIsSet;
-(void)unsetAcknowledged;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)validate;
-(long long)startTime;
-(void)setAcknowledged:(char)arg1 ;
-(char)acknowledged;
-(char)answered;
-(void)setAnswered:(char)arg1 ;
-(void)write:(id)arg1 ;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
@end

