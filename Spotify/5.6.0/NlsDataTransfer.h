/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NlsApiWorker, NlsMeterConfig, NlsCache, NSTimer, NSString, NlsHttpClient;

@interface NlsDataTransfer : NSObject {

	char _uploading;
	char _isPendingPingsProcessing;
	NSObject*<OS_dispatch_queue> _dataCacheQueue;
	NSObject*<OS_dispatch_queue> _dataTransferQueue;
	NlsApiWorker* _apiWorker;
	NlsMeterConfig* _config;
	NlsCache* _uploadCache;
	NSTimer* _timerUpload;
	/*^block*/id _processCachedRow;
	/*^block*/id _processPendingCachedRow;
	NSString* _cidNull;
	NlsHttpClient* _httpClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataCacheQueue;                 //@synthesize dataCacheQueue=_dataCacheQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataTransferQueue;              //@synthesize dataTransferQueue=_dataTransferQueue - In the implementation block
@property (nonatomic,retain) NlsApiWorker * apiWorker;                                    //@synthesize apiWorker=_apiWorker - In the implementation block
@property (nonatomic,retain) NlsMeterConfig * config;                                     //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NlsCache * uploadCache;                                      //@synthesize uploadCache=_uploadCache - In the implementation block
@property (assign,nonatomic) char uploading;                                              //@synthesize uploading=_uploading - In the implementation block
@property (retain) NSTimer * timerUpload;                                                 //@synthesize timerUpload=_timerUpload - In the implementation block
@property (nonatomic,copy) id processCachedRow;                                           //@synthesize processCachedRow=_processCachedRow - In the implementation block
@property (nonatomic,copy) id processPendingCachedRow;                                    //@synthesize processPendingCachedRow=_processPendingCachedRow - In the implementation block
@property (assign) char isPendingPingsProcessing;                                         //@synthesize isPendingPingsProcessing=_isPendingPingsProcessing - In the implementation block
@property (nonatomic,retain) NSString * cidNull;                                          //@synthesize cidNull=_cidNull - In the implementation block
@property (nonatomic,retain) NlsHttpClient * httpClient;                                  //@synthesize httpClient=_httpClient - In the implementation block
-(id)initWithWorker:(id)arg1 ;
-(NlsApiWorker *)apiWorker;
-(NSObject*<OS_dispatch_queue>)dataTransferQueue;
-(void)setApiWorker:(NlsApiWorker *)arg1 ;
-(void)handleConfigRetryCompleted;
-(NSObject*<OS_dispatch_queue>)dataCacheQueue;
-(void)setDataCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDataTransferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)cidNull;
-(id)processIAG:(id)arg1 ;
-(void)setCidNull:(NSString *)arg1 ;
-(void)stopUploadTimer;
-(void)setUploadCache:(NlsCache *)arg1 ;
-(void)setTimerUpload:(NSTimer *)arg1 ;
-(void)startUploadTimer;
-(void)setUploading:(char)arg1 ;
-(id)processCachedRow;
-(NlsCache *)uploadCache;
-(id)processPendingCachedRow;
-(void)setProcessPendingCachedRow:(id)arg1 ;
-(void)setProcessCachedRow:(id)arg1 ;
-(NSTimer *)timerUpload;
-(void)uploadTimerEvent:(id)arg1 ;
-(char)uploading;
-(void)startUploadTimerForRetry;
-(char)isPendingPingsProcessing;
-(void)setIsPendingPingsProcessing:(char)arg1 ;
-(void)dealloc;
-(NlsMeterConfig *)config;
-(void)setConfig:(NlsMeterConfig *)arg1 ;
-(NlsHttpClient *)httpClient;
-(void)setHttpClient:(NlsHttpClient *)arg1 ;
-(void)uploadData;
@end

