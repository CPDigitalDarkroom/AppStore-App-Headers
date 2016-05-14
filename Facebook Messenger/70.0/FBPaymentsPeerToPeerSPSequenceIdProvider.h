/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsPeerToPeerSPSnapshotControllerListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNSyncProtocolSequenceIdProviding.h>

@class FBPaymentsPeerToPeerSPSnapshotController, MNPaymentsPersistentStoreCoordinator, NSString;

@interface FBPaymentsPeerToPeerSPSequenceIdProvider : NSObject <FBPaymentsPeerToPeerSPSnapshotControllerListener, MNSyncProtocolSequenceIdProviding> {

	FBPaymentsPeerToPeerSPSnapshotController* _snapshotController;
	MNPaymentsPersistentStoreCoordinator* _persistentStoreCoordinator;
	/*^block*/id _fetchSnapshotAndSequenceIdSuccessCallback;
	/*^block*/id _fetchSnapshotAndSequenceIdFailureCallback;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSnapshotController:(id)arg1 persistentStoreCoordinator:(id)arg2 ;
-(void)_cleanupCallbacks;
-(void)snapshotController:(id)arg1 didFetchSnapshotWithSequenceId:(long long)arg2 ;
-(void)snapshotController:(id)arg1 didFailToFetchSnapshotWithError:(id)arg2 isCancelled:(char)arg3 ;
-(void)getPersistedSequenceIdWithSuccessCallback:(/*^block*/id)arg1 failureCallback:(/*^block*/id)arg2 ;
-(void)fetchLatestSequenceIdAndSnapshotWithSuccessCallback:(/*^block*/id)arg1 failureCallback:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

