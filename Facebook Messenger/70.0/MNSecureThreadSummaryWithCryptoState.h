/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureThreadSummary, MNSecureMessagingSessionCryptoState;

@interface MNSecureThreadSummaryWithCryptoState : FBValueObject <NSCoding, NSCopying> {

	MNSecureThreadSummary* _threadSummary;
	MNSecureMessagingSessionCryptoState* _cryptoState;

}

@property (nonatomic,copy,readonly) MNSecureThreadSummary * threadSummary;                          //@synthesize threadSummary=_threadSummary - In the implementation block
@property (nonatomic,copy,readonly) MNSecureMessagingSessionCryptoState * cryptoState;              //@synthesize cryptoState=_cryptoState - In the implementation block
-(MNSecureThreadSummary *)threadSummary;
-(MNSecureMessagingSessionCryptoState *)cryptoState;
-(id)initWithThreadSummary:(id)arg1 cryptoState:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

