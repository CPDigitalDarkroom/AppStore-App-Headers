/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSyncedThreadKey, FBStringWithRedactedDescription;

@interface MNGlobalDeleteMessagePlaceholder : FBValueObject <NSCopying> {

	NSString* _messageId;
	FBMSyncedThreadKey* _threadKey;
	NSString* _senderId;
	FBStringWithRedactedDescription* _text;
	unsigned _contentType;
	unsigned long long _timestamp;
	long long _actionId;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                      //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                 //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long actionId;                                       //@synthesize actionId=_actionId - In the implementation block
@property (nonatomic,readonly) unsigned contentType;                                     //@synthesize contentType=_contentType - In the implementation block
-(NSString *)senderId;
-(long long)actionId;
-(id)initWithMessageId:(id)arg1 threadKey:(id)arg2 senderId:(id)arg3 text:(id)arg4 timestamp:(unsigned long long)arg5 actionId:(long long)arg6 contentType:(unsigned)arg7 ;
-(unsigned long long)timestamp;
-(FBStringWithRedactedDescription *)text;
-(unsigned)contentType;
-(NSString *)messageId;
-(FBMSyncedThreadKey *)threadKey;
@end

