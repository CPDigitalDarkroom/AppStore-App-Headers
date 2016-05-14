/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/CipherMessage.h>

@class NSData, WhisperMessage, NSString;

@interface PreKeyWhisperMessage : NSObject <CipherMessage> {

	int _registrationId;
	int _version;
	int _prekeyID;
	int _signedPrekeyId;
	NSData* _baseKey;
	NSData* _identityKey;
	WhisperMessage* _message;
	NSData* _serialized;

}

@property (nonatomic,retain) NSData * identityKey;                    //@synthesize identityKey=_identityKey - In the implementation block
@property (nonatomic,retain) NSData * baseKey;                        //@synthesize baseKey=_baseKey - In the implementation block
@property (nonatomic,retain) NSData * serialized;                     //@synthesize serialized=_serialized - In the implementation block
@property (nonatomic,readonly) int registrationId;                    //@synthesize registrationId=_registrationId - In the implementation block
@property (nonatomic,readonly) int version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) int prekeyID;                          //@synthesize prekeyID=_prekeyID - In the implementation block
@property (nonatomic,readonly) int signedPrekeyId;                    //@synthesize signedPrekeyId=_signedPrekeyId - In the implementation block
@property (nonatomic,readonly) WhisperMessage * message;              //@synthesize message=_message - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWhisperMessage:(id)arg1 registrationId:(int)arg2 prekeyId:(int)arg3 signedPrekeyId:(int)arg4 baseKey:(id)arg5 identityKey:(id)arg6 ;
-(void)setSerialized:(NSData *)arg1 ;
-(int)registrationId;
-(void)setIdentityKey:(NSData *)arg1 ;
-(int)signedPrekeyId;
-(int)prekeyID;
-(id)initWithData:(id)arg1 ;
-(NSData *)baseKey;
-(WhisperMessage *)message;
-(int)version;
-(NSData *)identityKey;
-(void)setBaseKey:(NSData *)arg1 ;
-(NSData *)serialized;
@end

