/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMThreadParticipationInfo : FBValueObject <NSCopying> {

	NSString* _userId;
	unsigned long long _readReceiptTimestamp;
	unsigned long long _deliveryReceiptTimestamp;

}

@property (nonatomic,copy,readonly) NSString * userId;                                   //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) unsigned long long readReceiptTimestamp;                  //@synthesize readReceiptTimestamp=_readReceiptTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long deliveryReceiptTimestamp;              //@synthesize deliveryReceiptTimestamp=_deliveryReceiptTimestamp - In the implementation block
-(unsigned long long)readReceiptTimestamp;
-(unsigned long long)deliveryReceiptTimestamp;
-(id)initWithUserId:(id)arg1 readReceiptTimestamp:(unsigned long long)arg2 deliveryReceiptTimestamp:(unsigned long long)arg3 ;
-(NSString *)userId;
@end

