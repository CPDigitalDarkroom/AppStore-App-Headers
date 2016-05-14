/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:11 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSecureMessagingCryptoEngine.h>

@class MNSecureMessagingGlobalCryptoState, MNSecureMessagingIdentityStore, NSString;

@interface MNSecureMessagingCryptoEngineImpl : NSObject <MNSecureMessagingCryptoEngine> {

	MNSecureMessagingGlobalCryptoState* _globalState;
	MNSecureMessagingIdentityStore* _identityStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_encryptMessage:(id)arg1 withState:(id)arg2 persistStateBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)_decryptMessage:(id)arg1 withState:(id)arg2 recipientId:(id)arg3 persistStateAndPayloadBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(id)generateKeyBundleWithState:(id)arg1 persistStateWithBlock:(/*^block*/id)arg2 ;
-(id)generateAcceptPayloadFromPreKeyBundle:(id)arg1 senderId:(id)arg2 acceptPayload:(id)arg3 persistStateBlock:(/*^block*/id)arg4 ;
-(id)processRequestAcceptedPayload:(id)arg1 withState:(id)arg2 senderId:(id)arg3 persistStateBlock:(/*^block*/id)arg4 ;
-(id)encryptMessage:(id)arg1 withState:(id)arg2 persistStateBlock:(/*^block*/id)arg3 ;
-(id)decryptMessageBlob:(id)arg1 withState:(id)arg2 persistStateAndPayloadBlock:(/*^block*/id)arg3 ;
-(id)initWithGlobalState:(id)arg1 identityStore:(id)arg2 ;
@end

