/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey, NSString, MNAbstractMessage;

@interface MNAppMessage : FBValueObject <NSCopying> {

	FBMMessageKey* _messageKey;
	NSString* _senderId;
	MNAbstractMessage* _abstractMessage;
	unsigned long long _timestamp;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                       //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                              //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) MNAbstractMessage * abstractMessage;              //@synthesize abstractMessage=_abstractMessage - In the implementation block
-(NSString *)senderId;
-(MNAbstractMessage *)abstractMessage;
-(FBMMessageKey *)messageKey;
-(id)initWithMessageKey:(id)arg1 senderId:(id)arg2 timestamp:(unsigned long long)arg3 abstractMessage:(id)arg4 ;
-(unsigned long long)timestamp;
@end

