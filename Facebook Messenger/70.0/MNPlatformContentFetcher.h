/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMediaCollectionFetching.h>

@protocol OS_dispatch_queue, FBServiceTransactionMutating, MNMediaCollectionFetchingDelegate;
@class NSArray, NSDictionary, FBUserSession, NSString, MNConfigManager, NSObject;

@interface MNPlatformContentFetcher : NSObject <MNMediaCollectionFetching> {

	FBUserSession* _session;
	NSArray* _appIDs;
	NSArray* _resultTypes;
	unsigned _limit;
	NSString* _query;
	int _queryType;
	unsigned _groupByType;
	float _previewHeight;
	double _maxCacheAge;
	char _cachedResponse;
	NSDictionary* _stickerSizeDictionary;
	MNConfigManager* _configManager;
	NSObject*<OS_dispatch_queue> _queue;
	int _fetchState;
	id<FBServiceTransactionMutating> _graphQLServiceMutator;
	int _contentFetcherType;
	id<MNMediaCollectionFetchingDelegate> _delegate;
	NSArray* _mediaCollection;
	NSDictionary* _stickerSizeByFbId;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMediaCollectionFetchingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaCollection;                                   //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stickerSizeByFbId;                            //@synthesize stickerSizeByFbId=_stickerSizeByFbId - In the implementation block
@property (nonatomic,readonly) char needsRefetch; 
@property (getter=isEmpty,nonatomic,readonly) char empty; 
-(id)initWithSession:(id)arg1 limit:(unsigned)arg2 appIDs:(id)arg3 resultTypes:(id)arg4 query:(id)arg5 queryType:(int)arg6 groupByType:(unsigned)arg7 previewHeight:(float)arg8 maxCacheAge:(unsigned)arg9 contentFetcherType:(int)arg10 configManager:(id)arg11 queue:(id)arg12 ;
-(char)needsRefetch;
-(void)fetchCollection;
-(NSDictionary *)stickerSizeByFbId;
-(void)_handleCachedResponse:(id)arg1 ;
-(void)_handleDownloadResponse:(id)arg1 ;
-(void)_handleFailureResponseWithError:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<MNMediaCollectionFetchingDelegate>)arg1 ;
-(id<MNMediaCollectionFetchingDelegate>)delegate;
-(char)isEmpty;
-(NSArray *)mediaCollection;
@end

