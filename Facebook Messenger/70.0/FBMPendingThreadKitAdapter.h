/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:03 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMBatchThreadCreatorListening.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPendingThreadCreateWithMessageAPIRequester.h>

@protocol FBProvider;
@class NSMutableDictionary, NSString;

@interface FBMPendingThreadKitAdapter : NSObject <FBMBatchThreadCreatorListening, FBSessionClassProvidable, MNPendingThreadCreateWithMessageAPIRequester> {

	id<FBProvider> _batchThreadCreatorProvider;
	NSMutableDictionary* _offlineIdToThreadCreationResponserMap;
	NSMutableDictionary* _offlineIdToBatchThreadCreatorMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_cleanUpThreadCreationForOfflineId:(id)arg1 ;
-(void)cancelThreadCreationWithOfflineId:(id)arg1 ;
-(id)_offlineIdForBatchThreadCreator:(id)arg1 ;
-(void)batchThreadCreator:(id)arg1 didCreateThreadSummary:(id)arg2 ;
-(void)batchThreadCreator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)createThreadWithOfflineId:(id)arg1 message:(id)arg2 invitees:(id)arg3 useExistingGroup:(char)arg4 callbackQueue:(id)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
@end

