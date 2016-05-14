/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStickerPackMetadataDownloaderDelegate, FBServiceTransactionMutating;
@class FBUserSession, FBMemStickerPack;

@interface FBStickerPackMetadataDownloader : NSObject {

	FBUserSession* _session;
	FBMemStickerPack* _stickerPack;
	int _requestPriority;
	id<FBStickerPackMetadataDownloaderDelegate> _delegate;
	id<FBServiceTransactionMutating> _networkRequest;

}
-(void)_handleDownloadResponse:(id)arg1 ;
-(void)_handleDownloadError:(id)arg1 ;
-(void)_setConfigurationObject:(id)arg1 ;
-(id)initWithSession:(id)arg1 stickerPack:(id)arg2 requestPriority:(int)arg3 delegate:(id)arg4 ;
-(void)fetchStickerPackMetadata;
-(void)cancel;
@end

