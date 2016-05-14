/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PreKeyBundle : NSObject <NSSecureCoding> {

	NSData* _identityKey;
	int _registrationId;
	int _deviceId;
	NSData* _signedPreKeyPublic;
	NSData* _preKeyPublic;
	int _preKeyId;
	int _signedPreKeyId;
	NSData* _signedPreKeySignature;

}

@property (nonatomic,readonly) NSData * identityKey;                        //@synthesize identityKey=_identityKey - In the implementation block
@property (nonatomic,readonly) int registrationId;                          //@synthesize registrationId=_registrationId - In the implementation block
@property (nonatomic,readonly) int deviceId;                                //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) NSData * signedPreKeyPublic;                 //@synthesize signedPreKeyPublic=_signedPreKeyPublic - In the implementation block
@property (nonatomic,readonly) NSData * preKeyPublic;                       //@synthesize preKeyPublic=_preKeyPublic - In the implementation block
@property (nonatomic,readonly) int preKeyId;                                //@synthesize preKeyId=_preKeyId - In the implementation block
@property (nonatomic,readonly) int signedPreKeyId;                          //@synthesize signedPreKeyId=_signedPreKeyId - In the implementation block
@property (nonatomic,readonly) NSData * signedPreKeySignature;              //@synthesize signedPreKeySignature=_signedPreKeySignature - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithRegistrationId:(int)arg1 deviceId:(int)arg2 preKeyId:(int)arg3 preKeyPublic:(id)arg4 signedPreKeyPublic:(id)arg5 signedPreKeyId:(int)arg6 signedPreKeySignature:(id)arg7 identityKey:(id)arg8 ;
-(int)registrationId;
-(NSData *)signedPreKeyPublic;
-(NSData *)preKeyPublic;
-(int)preKeyId;
-(int)signedPreKeyId;
-(NSData *)signedPreKeySignature;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)identityKey;
-(int)deviceId;
@end

