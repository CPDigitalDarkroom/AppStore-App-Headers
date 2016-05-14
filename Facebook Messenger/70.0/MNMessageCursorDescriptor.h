/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMessageCursorDescriptor : FBValueObject <NSCopying> {

	NSString* _messageId;
	unsigned long long _messageTimestamp;

}

@property (nonatomic,copy,readonly) NSString * messageId;                        //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) unsigned long long messageTimestamp;              //@synthesize messageTimestamp=_messageTimestamp - In the implementation block
-(id)initWithMessageId:(id)arg1 messageTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)messageTimestamp;
-(NSString *)messageId;
@end

