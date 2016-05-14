/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString;

@interface MNMessagesSyncDeltaReadReceipt : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	long long __actorFbId;
	long long __actionTimestampMs;
	long long __watermarkTimestampMs;
	char __threadKey_isset;
	char __actorFbId_isset;
	char __actionTimestampMs_isset;
	char __watermarkTimestampMs_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (assign,setter=setActorFbId:,getter=actorFbId,nonatomic) long long actorFbId; 
@property (assign,setter=setActionTimestampMs:,getter=actionTimestampMs,nonatomic) long long actionTimestampMs; 
@property (assign,setter=setWatermarkTimestampMs:,getter=watermarkTimestampMs,nonatomic) long long watermarkTimestampMs; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(void)read:(id)arg1 ;
-(char)threadKeyIsSet;
-(long long)actorFbId;
-(long long)actionTimestampMs;
-(char)actorFbIdIsSet;
-(void)setActorFbId:(long long)arg1 ;
-(void)unsetThreadKey;
-(void)unsetActorFbId;
-(void)setActionTimestampMs:(long long)arg1 ;
-(void)setWatermarkTimestampMs:(long long)arg1 ;
-(id)initWithThreadKey:(id)arg1 actorFbId:(long long)arg2 actionTimestampMs:(long long)arg3 watermarkTimestampMs:(long long)arg4 ;
-(char)actionTimestampMsIsSet;
-(void)unsetActionTimestampMs;
-(long long)watermarkTimestampMs;
-(char)watermarkTimestampMsIsSet;
-(void)unsetWatermarkTimestampMs;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
-(MNMessagesSyncThreadKey *)threadKey;
@end

