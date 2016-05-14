/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSyncedThreadKey, FBMMessageAttachment, NSArray, FBMMessageAttribution, FBExtensibleMessageData;

@interface FBMSPSentMessage : FBValueObject <NSCopying> {

	NSString* _messageId;
	NSString* _offlineThreadingId;
	FBMSyncedThreadKey* _threadKey;
	FBMMessageAttachment* _attachment;
	NSArray* _tags;
	FBMMessageAttribution* _attribution;
	FBExtensibleMessageData* _extensibleMessageData;
	unsigned long long _timestamp;
	long long _actionId;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                         //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                                //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                               //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageAttachment * attachment;                            //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tags;                                               //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long actionId;                                                //@synthesize actionId=_actionId - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageAttribution * attribution;                          //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageData * extensibleMessageData;              //@synthesize extensibleMessageData=_extensibleMessageData - In the implementation block
-(NSString *)offlineThreadingId;
-(long long)actionId;
-(FBExtensibleMessageData *)extensibleMessageData;
-(id)initWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 threadKey:(id)arg3 attachment:(id)arg4 tags:(id)arg5 timestamp:(unsigned long long)arg6 actionId:(long long)arg7 attribution:(id)arg8 extensibleMessageData:(id)arg9 ;
-(unsigned long long)timestamp;
-(NSArray *)tags;
-(FBMMessageAttachment *)attachment;
-(FBMMessageAttribution *)attribution;
-(NSString *)messageId;
-(FBMSyncedThreadKey *)threadKey;
@end

