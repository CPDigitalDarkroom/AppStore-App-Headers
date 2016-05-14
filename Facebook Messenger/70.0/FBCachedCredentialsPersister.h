/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBKeychainItemController;

@interface FBCachedCredentialsPersister : NSObject {

	FBKeychainItemController* _keychainController;
	void* _keychainAccessibleAttribute;

}
-(void)persistCachedCredentials:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)ensureAvailability;
-(void)clearCachedCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithKeychainController:(id)arg1 availability:(unsigned)arg2 keychainBackupPolicy:(unsigned)arg3 ;
-(id)init;
@end

