/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:01 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMCommerceMessageTypeInfo : FBValueObject <NSCopying, NSCoding> {

	NSString* _commerceMessageType;

}

@property (nonatomic,copy,readonly) NSString * commerceMessageType;              //@synthesize commerceMessageType=_commerceMessageType - In the implementation block
-(unsigned)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(NSString *)commerceMessageType;
-(id)initWithCommerceMessageType:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

