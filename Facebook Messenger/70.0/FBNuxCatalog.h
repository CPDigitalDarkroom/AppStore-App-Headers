/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSDictionary, NSMutableDictionary, NSOrderedSet, NSArray;

@interface FBNuxCatalog : NSObject {

	NSDictionary* _catalogEntries;
	NSMutableDictionary* _nuxPresenterMap;
	NSOrderedSet* _serverEligibleNuxIDs;
	NSDictionary* _triggerIDServerEligibleNuxIDsMap;
	NSMutableDictionary* _eligibilityOverrides;
	mutex _lock;

}

@property (nonatomic,readonly) unsigned count; 
@property (nonatomic,readonly) NSArray * nuxIDs; 
+(id)_catalogEntriesFromNuxConfigurations:(id)arg1 ;
-(void)registerNuxPresenter:(id)arg1 ;
-(void)unregisterNuxPresenter:(id)arg1 ;
-(id)initWithConfigurationProfile:(id)arg1 ;
-(unsigned)occurrenceCountForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3 ;
-(id)configurationProfile;
-(id)nuxPresenterForNuxID:(id)arg1 ;
-(void)overrideServerEligibility:(char)arg1 forNuxWithID:(id)arg2 ;
-(void)removeViewRecordsForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3 ;
-(id)nuxNameForNuxID:(id)arg1 ;
-(id)_catalogEntryByNuxID:(id)arg1 ;
-(id)_allRecordListsForNuxID:(id)arg1 event:(id)arg2 ;
-(id)_recordListForNuxID:(id)arg1 event:(id)arg2 versionID:(id)arg3 ;
-(id)_lastOccurrenceTimeForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3 ;
-(char)_eventWithLastEventTime:(id)arg1 occurredWithinTimeInterval:(double)arg2 ;
-(void)_updateTriggerIDServerEligibleNuxIDsMap;
-(id)overriddenEligibilityForNuxID:(id)arg1 ;
-(void)updateWithServerEligibleNuxIDs:(id)arg1 ;
-(char)isServerEligibleNuxID:(id)arg1 ;
-(char)nuxWithID:(id)arg1 versionID:(id)arg2 hadEvent:(id)arg3 withinTimeInterval:(double)arg4 ;
-(id)eligibleNuxIDsForTriggerID:(id)arg1 withTriggerContext:(id)arg2 ;
-(void)recordEvent:(id)arg1 nuxID:(id)arg2 timestamp:(id)arg3 versionID:(id)arg4 ;
-(NSArray *)nuxIDs;
-(id)initWithCatalogEntries:(id)arg1 ;
-(id)archivedCatalogEntries;
-(id)lastOccurrenceTimeForEvent:(id)arg1 nuxID:(id)arg2 versionID:(id)arg3 ;
-(unsigned)count;
-(id)debugDescription;
@end

