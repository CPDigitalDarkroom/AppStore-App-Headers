/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNSecureThreadSummaryWithCryptoState, MNSecureMessage, NSString, FBMSecureThreadKey, MNSecureAttachmentContent;

@interface MNSecureMessagingPersistJob : NSObject <NSCopying, NSCoding> {

	unsigned _subtype;
	MNSecureThreadSummaryWithCryptoState* _updateThread_threadSummary;
	MNSecureMessage* _insertMessage_secureMessage;
	NSString* _insertAttachment_messageId;
	FBMSecureThreadKey* _insertAttachment_threadKey;
	NSString* _insertAttachment_attachmentId;
	MNSecureAttachmentContent* _insertAttachment_attachment;
	FBMSecureThreadKey* _deleteThread_threadKey;
	NSString* _deleteMessage_messageId;
	FBMSecureThreadKey* _deleteMessage_threadKey;

}
+(id)deleteThreadWithThreadKey:(id)arg1 ;
+(id)deleteMessageWithMessageId:(id)arg1 threadKey:(id)arg2 ;
+(id)insertAttachmentWithMessageId:(id)arg1 threadKey:(id)arg2 attachmentId:(id)arg3 attachment:(id)arg4 ;
+(id)insertMessageWithSecureMessage:(id)arg1 ;
+(id)updateThreadWithThreadSummary:(id)arg1 ;
-(void)matchUpdateThread:(/*^block*/id)arg1 insertMessage:(/*^block*/id)arg2 insertAttachment:(/*^block*/id)arg3 deleteThread:(/*^block*/id)arg4 deleteMessage:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

