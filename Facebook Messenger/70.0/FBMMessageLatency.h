/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageSendLatency;

@interface FBMMessageLatency : FBValueObject <NSCopying> {

	FBMMessageSendLatency* _sendLatency;
	double _deliveryReceiptTimestamp;
	double _createdTimestamp;

}

@property (nonatomic,copy,readonly) FBMMessageSendLatency * sendLatency;              //@synthesize sendLatency=_sendLatency - In the implementation block
@property (nonatomic,readonly) double deliveryReceiptTimestamp;                       //@synthesize deliveryReceiptTimestamp=_deliveryReceiptTimestamp - In the implementation block
@property (nonatomic,readonly) double createdTimestamp;                               //@synthesize createdTimestamp=_createdTimestamp - In the implementation block
-(FBMMessageSendLatency *)sendLatency;
-(double)deliveryReceiptTimestamp;
-(double)createdTimestamp;
-(id)initWithSendLatency:(id)arg1 deliveryReceiptTimestamp:(double)arg2 createdTimestamp:(double)arg3 ;
@end

