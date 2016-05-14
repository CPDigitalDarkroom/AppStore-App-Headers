/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBUserSession, NSObject;

@interface FBContactSyncPersistentStore : NSObject {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _processingQueue;

}
-(id)_contactSyncRecordFilePath;
-(void)fetchPersistentContactsWithSuccessBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 callBackQueue:(id)arg3 ;
-(void)saveContactsPersistently:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 callBackQueue:(id)arg4 ;
-(void)deletePersistentContactsWithSuccessBlock:(/*^block*/id)arg1 errorBlock:(/*^block*/id)arg2 callBackQueue:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

