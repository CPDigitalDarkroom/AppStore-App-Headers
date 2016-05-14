/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMSPFolderCountDeltaHandlerListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSessionClassProvidable.h>

@protocol FBProvider;
@class MNThreadListMetadataFetcher, FBMSPFolderCountDeltaHandlerListenerAnnouncer, MNPendingRequestsSPUpdateHandlerListenerAnnouncer, NSString;

@interface MNPendingRequestsSPUpdateHandler : NSObject <FBMSPFolderCountDeltaHandlerListener, FBSessionClassProvidable> {

	id<FBProvider> _pendingRequestsMetaDataFetcherProvider;
	MNThreadListMetadataFetcher* _pendingRequestsMetaDataFetcher;
	FBMSPFolderCountDeltaHandlerListenerAnnouncer* _folderCountDeltaHandlerAnnouncer;
	MNPendingRequestsSPUpdateHandlerListenerAnnouncer* _announcer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_couldNotFetchThreadListMetaDataWithError:(id)arg1 ;
-(void)_didFetchUnreadRequestNumber:(unsigned)arg1 totalNumber:(unsigned)arg2 mailboxSnippet:(id)arg3 ;
-(void)syncProtocolFolderCountDeltaDidUpdateFolderCountForFolder:(unsigned)arg1 withUnreadThreadsNumber:(unsigned)arg2 ;
-(id)initWithFolderCountDeltaHandlerAnnouncer:(id)arg1 pendingRequestsMetaDataFetcherProvider:(id)arg2 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

