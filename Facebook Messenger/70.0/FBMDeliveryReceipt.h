/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSyncedThreadKey, NSSet;

@interface FBMDeliveryReceipt : FBValueObject <NSCopying> {

	NSString* _senderId;
	FBMSyncedThreadKey* _threadKey;
	NSSet* _messageIds;
	unsigned _source;
	long long _timestamp;

}

@property (nonatomic,copy,readonly) NSString * senderId;                         //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSSet * messageIds;                          //@synthesize messageIds=_messageIds - In the implementation block
@property (nonatomic,readonly) unsigned source;                                  //@synthesize source=_source - In the implementation block
-(NSString *)senderId;
-(id)initWithSenderId:(id)arg1 threadKey:(id)arg2 timestamp:(long long)arg3 messageIds:(id)arg4 source:(unsigned)arg5 ;
-(NSSet *)messageIds;
-(long long)timestamp;
-(unsigned)source;
-(FBMSyncedThreadKey *)threadKey;
@end

