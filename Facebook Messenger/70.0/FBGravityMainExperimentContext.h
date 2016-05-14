/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:17 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBExperimentContext.h>

@class NSString, NSArray;

@interface FBGravityMainExperimentContext : FBExperimentContext {

	char _enabled;
	char _allowDuplicatesInScan;
	char _backgroundEnabledRaw;
	char _backgroundEnabledOverride;
	NSString* _uuid;
	NSString* _bleUUID;
	unsigned _foregroundScanInterval;
	unsigned _minScanningDuration;
	unsigned _maxScanningDuration;
	unsigned _minTimeBetweenScans;
	NSArray* _bleForegroundUUIDList;
	unsigned _cacheRssiThreshold;
	float _ibeaconBleSkipScanPercent;

}

@property (nonatomic,copy) NSArray * bleForegroundUUIDList;                                  //@synthesize bleForegroundUUIDList=_bleForegroundUUIDList - In the implementation block
@property (nonatomic,readonly) char backgroundEnabledRaw;                                    //@synthesize backgroundEnabledRaw=_backgroundEnabledRaw - In the implementation block
@property (assign,nonatomic) char backgroundEnabledOverride;                                 //@synthesize backgroundEnabledOverride=_backgroundEnabledOverride - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) char enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isBackgroundEnabled,nonatomic) char backgroundEnabled; 
@property (nonatomic,copy,readonly) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bleUUID;                                      //@synthesize bleUUID=_bleUUID - In the implementation block
@property (nonatomic,readonly) unsigned foregroundScanInterval;                              //@synthesize foregroundScanInterval=_foregroundScanInterval - In the implementation block
@property (nonatomic,readonly) unsigned minScanningDuration;                                 //@synthesize minScanningDuration=_minScanningDuration - In the implementation block
@property (nonatomic,readonly) unsigned maxScanningDuration;                                 //@synthesize maxScanningDuration=_maxScanningDuration - In the implementation block
@property (nonatomic,readonly) unsigned minTimeBetweenScans;                                 //@synthesize minTimeBetweenScans=_minTimeBetweenScans - In the implementation block
@property (nonatomic,readonly) char allowDuplicatesInScan;                                   //@synthesize allowDuplicatesInScan=_allowDuplicatesInScan - In the implementation block
@property (nonatomic,readonly) unsigned cacheRssiThreshold;                                  //@synthesize cacheRssiThreshold=_cacheRssiThreshold - In the implementation block
@property (nonatomic,readonly) float ibeaconBleSkipScanPercent;                              //@synthesize ibeaconBleSkipScanPercent=_ibeaconBleSkipScanPercent - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(void)setBleForegroundUUIDList:(NSArray *)arg1 ;
-(void)setBackgroundEnabledOverride:(char)arg1 ;
-(char)backgroundEnabledRaw;
-(char)backgroundEnabledOverride;
-(void)setBackgroundEnabled:(char)arg1 ;
-(char)isBackgroundEnabled;
-(NSString *)bleUUID;
-(unsigned)foregroundScanInterval;
-(unsigned)minScanningDuration;
-(unsigned)maxScanningDuration;
-(unsigned)minTimeBetweenScans;
-(char)allowDuplicatesInScan;
-(NSArray *)bleForegroundUUIDList;
-(unsigned)cacheRssiThreshold;
-(float)ibeaconBleSkipScanPercent;
-(char)isEnabled;
-(NSString *)uuid;
@end

