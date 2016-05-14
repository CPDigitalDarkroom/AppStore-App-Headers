/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMSyncedThreadKey, FBStringWithRedactedDescription, FBMMessageAttachment, NSArray, NSDictionary, FBMMessageAttribution, FBMAdminText, FBMCommerceMessageTypeInfo, FBExtensibleMessageData;

@interface FBMMessageBuilder : NSObject {

	NSString* _messageId;
	NSString* _offlineThreadingId;
	FBMSyncedThreadKey* _threadKey;
	NSString* _senderId;
	FBStringWithRedactedDescription* _text;
	FBMMessageAttachment* _attachment;
	NSArray* _tags;
	NSDictionary* _logMessage;
	unsigned long long _timestamp;
	long long _actionId;
	FBMMessageAttribution* _attribution;
	unsigned _type;
	FBMAdminText* _adminText;
	int _messageLifeTime;
	char _isSponsored;
	FBMCommerceMessageTypeInfo* _commerceMessageTypeInfo;
	FBExtensibleMessageData* _extensibleMessageData;

}
+(id)messageFromExistingMessage:(id)arg1 ;
+(id)message;
-(id)withType:(unsigned)arg1 ;
-(id)withSenderId:(id)arg1 ;
-(id)withOfflineThreadingId:(id)arg1 ;
-(id)withTimestamp:(unsigned long long)arg1 ;
-(id)withAttribution:(id)arg1 ;
-(id)withMessageId:(id)arg1 ;
-(id)withThreadKey:(id)arg1 ;
-(id)withText:(id)arg1 ;
-(id)withAttachment:(id)arg1 ;
-(id)withTags:(id)arg1 ;
-(id)withLogMessage:(id)arg1 ;
-(id)withActionId:(long long)arg1 ;
-(id)withAdminText:(id)arg1 ;
-(id)withMessageLifeTime:(int)arg1 ;
-(id)withIsSponsored:(char)arg1 ;
-(id)withCommerceMessageTypeInfo:(id)arg1 ;
-(id)withExtensibleMessageData:(id)arg1 ;
-(id)build;
@end

