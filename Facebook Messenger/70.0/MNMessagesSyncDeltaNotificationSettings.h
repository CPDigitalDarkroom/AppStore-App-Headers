/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncThreadKey, NSMutableArray, NSString;

@interface MNMessagesSyncDeltaNotificationSettings : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	NSMutableArray* __doNotDisturbRanges;
	char __threadKey_isset;
	char __doNotDisturbRanges_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (setter=setDoNotDisturbRanges:,getter=doNotDisturbRanges,nonatomic,retain) NSMutableArray * doNotDisturbRanges; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(void)read:(id)arg1 ;
-(char)threadKeyIsSet;
-(void)unsetThreadKey;
-(void)setDoNotDisturbRanges:(NSMutableArray *)arg1 ;
-(id)initWithThreadKey:(id)arg1 doNotDisturbRanges:(id)arg2 ;
-(NSMutableArray *)doNotDisturbRanges;
-(char)doNotDisturbRangesIsSet;
-(void)unsetDoNotDisturbRanges;
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

