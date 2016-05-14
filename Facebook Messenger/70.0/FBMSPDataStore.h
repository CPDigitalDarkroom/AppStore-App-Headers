/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMessagingStoreDatabaseLifetimeEventListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@class MNUserSettings, FBMessagingStoreDatabaseLifetimeEventListeningAnnouncer, NSString;

@interface FBMSPDataStore : NSObject <FBMessagingStoreDatabaseLifetimeEventListening, FBSessionClassProvidable> {

	MNUserSettings* _userSettings;
	long long _lastSequenceId;
	FBMessagingStoreDatabaseLifetimeEventListeningAnnouncer* _databaseLifetimeAnnouncer;

}

@property (nonatomic,copy) NSString * syncToken; 
@property (assign,nonatomic) long long lastSequenceId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didOpenDatabase;
-(void)didFailToOpenDatabaseWithError:(id)arg1 ;
-(void)didCreateDatabaseTables;
-(void)didDiscardDatabaseFile;
-(void)willDiscardDatabaseContents;
-(void)persistSequenceId:(long long)arg1 ;
-(long long)lastSequenceId;
-(void)setLastSequenceId:(long long)arg1 ;
-(id)initWithUserSettings:(id)arg1 databaseLifetimeAnnouncer:(id)arg2 ;
-(void)clearPersistedSequenceId;
-(void)_persistSequenceId:(long long)arg1 ;
-(void)dealloc;
-(void)reset;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
@end

