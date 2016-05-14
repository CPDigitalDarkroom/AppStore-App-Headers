/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/PreKeyRecord.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface SignedPreKeyRecord : PreKeyRecord <NSCopying, NSSecureCoding> {

	NSData* _signature;
	NSDate* _generatedAt;

}

@property (nonatomic,readonly) NSData * signature;                //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSDate * generatedAt;              //@synthesize generatedAt=_generatedAt - In the implementation block
+(char)supportsSecureCoding;
-(NSDate *)generatedAt;
-(id)initWithId:(int)arg1 keyPair:(id)arg2 ;
-(id)initWithId:(int)arg1 keyPair:(id)arg2 signature:(id)arg3 generatedAt:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)signature;
@end

