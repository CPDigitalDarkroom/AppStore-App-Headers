/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGravityScannerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAppService.h>

@class FBUserSession, FBGravityScanner, FBGravityBeaconsListenerAnnouncer, NSDictionary, NSDate, FBBluetoothDataList, NSString;

@interface FBGravityBeaconsManager : NSObject <FBGravityScannerDelegate, FBAppService> {

	FBUserSession* _session;
	FBGravityScanner* _scanner;
	FBGravityBeaconsListenerAnnouncer* _beaconsAnnouncer;
	NSDictionary* _lastScanQueryPayload;
	NSDate* _lastScanQueryPayloadDate;
	FBBluetoothDataList* _lastScannedRawData;

}

@property (retain) FBBluetoothDataList * lastScannedRawData;              //@synthesize lastScannedRawData=_lastScannedRawData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(unsigned)serviceStartupLevel;
-(id)lastBluetoothScanData;
-(void)setLastScannedRawData:(FBBluetoothDataList *)arg1 ;
-(FBBluetoothDataList *)lastScannedRawData;
-(void)gravityScanner:(id)arg1 didScanBLEBeacons:(id)arg2 iBeacons:(id)arg3 ;
-(void)setBackgroundScanningEnabled:(char)arg1 ;
-(void)addScanStateListener:(id)arg1 ;
-(void)removeScanStateListener:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

