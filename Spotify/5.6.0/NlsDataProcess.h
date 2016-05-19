/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NlsMappingDictionary, NlsMeterConfig, NlsApiWorker, NlsID3Tag, NlsCache, NSString, NSMutableString, NlsDataProcessRequest;

@interface NlsDataProcess : NSObject {

	char _pausePattern;
	char _delayedPings;
	char _disableFlag;
	NSObject*<OS_dispatch_queue> _dataProcessQueue;
	NSObject*<OS_dispatch_queue> _dataTransferQueue;
	int _processorType;
	NSDictionary* _tagConfigDefaultDict;
	NlsMappingDictionary* _cmsInfoDict;
	NlsMeterConfig* _config;
	NlsApiWorker* _apiWorker;
	NlsID3Tag* _pId3Tag;
	int _nMinIntervalThreshold;
	int _processorId;
	int _maxPingCount;
	int _currentPingCount;
	int _inSessionType;
	NSObject*<OS_dispatch_queue> _dataGetTsvQueue;
	NSObject*<OS_dispatch_queue> _dataCacheQueue;
	NlsCache* _msgCache;
	NSString* _id3Delimiter;
	NSString* _cadence;
	NSString* _nolTimer;
	int _creditValue;
	int _id3sequence;
	int _segmentLength;
	int _segmentBaseDuration;
	NSString* _cidNull;
	NSString* _defaultBreakout;
	NSString* _creditFlag;
	NSString* _segmentPrefix;
	NSString* _shortPingPrefix;
	int _defaultSegmentNumber;
	NSString* _url;
	int _nSendQual;
	int _maxTpLength;
	int _shortPingFormatValue;
	int _nMaxIntervalThreshold;
	int _viewPatternSource;
	NlsMappingDictionary* _playInfoDict;
	NSMutableString* _id3TagsString;
	NSString* _cmsAssetId;
	NlsDataProcessRequest* _currentDataProcessRequest;
	/*^block*/id _handleTSVBlock;
	/*^block*/id _handleStationBlock;
	double _backgroundThreshold;
	double _id3FirstTs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataProcessQueue;                  //@synthesize dataProcessQueue=_dataProcessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataTransferQueue;                 //@synthesize dataTransferQueue=_dataTransferQueue - In the implementation block
@property (assign,nonatomic) int processorType;                                              //@synthesize processorType=_processorType - In the implementation block
@property (nonatomic,retain) NSDictionary * tagConfigDefaultDict;                            //@synthesize tagConfigDefaultDict=_tagConfigDefaultDict - In the implementation block
@property (retain) NlsMappingDictionary * cmsInfoDict;                                       //@synthesize cmsInfoDict=_cmsInfoDict - In the implementation block
@property (nonatomic,retain) NlsMeterConfig * config;                                        //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NlsApiWorker * apiWorker;                                       //@synthesize apiWorker=_apiWorker - In the implementation block
@property (assign,nonatomic) double backgroundThreshold;                                     //@synthesize backgroundThreshold=_backgroundThreshold - In the implementation block
@property (nonatomic,retain) NlsID3Tag * pId3Tag;                                            //@synthesize pId3Tag=_pId3Tag - In the implementation block
@property (assign,nonatomic) int nMinIntervalThreshold;                                      //@synthesize nMinIntervalThreshold=_nMinIntervalThreshold - In the implementation block
@property (assign,nonatomic) int processorId;                                                //@synthesize processorId=_processorId - In the implementation block
@property (assign,nonatomic) int maxPingCount;                                               //@synthesize maxPingCount=_maxPingCount - In the implementation block
@property (assign,nonatomic) int currentPingCount;                                           //@synthesize currentPingCount=_currentPingCount - In the implementation block
@property (assign,nonatomic) int inSessionType;                                              //@synthesize inSessionType=_inSessionType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataGetTsvQueue;                   //@synthesize dataGetTsvQueue=_dataGetTsvQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataCacheQueue;                    //@synthesize dataCacheQueue=_dataCacheQueue - In the implementation block
@property (nonatomic,retain) NlsCache * msgCache;                                            //@synthesize msgCache=_msgCache - In the implementation block
@property (assign,nonatomic) char pausePattern;                                              //@synthesize pausePattern=_pausePattern - In the implementation block
@property (assign,nonatomic) char delayedPings;                                              //@synthesize delayedPings=_delayedPings - In the implementation block
@property (assign,nonatomic) char disableFlag;                                               //@synthesize disableFlag=_disableFlag - In the implementation block
@property (nonatomic,retain) NSString * id3Delimiter;                                        //@synthesize id3Delimiter=_id3Delimiter - In the implementation block
@property (nonatomic,retain) NSString * cadence;                                             //@synthesize cadence=_cadence - In the implementation block
@property (nonatomic,retain) NSString * nolTimer;                                            //@synthesize nolTimer=_nolTimer - In the implementation block
@property (assign,nonatomic) int creditValue;                                                //@synthesize creditValue=_creditValue - In the implementation block
@property (assign,nonatomic) int id3sequence;                                                //@synthesize id3sequence=_id3sequence - In the implementation block
@property (assign,nonatomic) double id3FirstTs;                                              //@synthesize id3FirstTs=_id3FirstTs - In the implementation block
@property (assign,nonatomic) int segmentLength;                                              //@synthesize segmentLength=_segmentLength - In the implementation block
@property (assign,nonatomic) int segmentBaseDuration;                                        //@synthesize segmentBaseDuration=_segmentBaseDuration - In the implementation block
@property (nonatomic,retain) NSString * cidNull;                                             //@synthesize cidNull=_cidNull - In the implementation block
@property (nonatomic,retain) NSString * defaultBreakout;                                     //@synthesize defaultBreakout=_defaultBreakout - In the implementation block
@property (nonatomic,retain) NSString * creditFlag;                                          //@synthesize creditFlag=_creditFlag - In the implementation block
@property (nonatomic,retain) NSString * segmentPrefix;                                       //@synthesize segmentPrefix=_segmentPrefix - In the implementation block
@property (nonatomic,retain) NSString * shortPingPrefix;                                     //@synthesize shortPingPrefix=_shortPingPrefix - In the implementation block
@property (assign,nonatomic) int defaultSegmentNumber;                                       //@synthesize defaultSegmentNumber=_defaultSegmentNumber - In the implementation block
@property (nonatomic,retain) NSString * url;                                                 //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) int nSendQual;                                                  //@synthesize nSendQual=_nSendQual - In the implementation block
@property (assign,nonatomic) int maxTpLength;                                                //@synthesize maxTpLength=_maxTpLength - In the implementation block
@property (assign,nonatomic) int shortPingFormatValue;                                       //@synthesize shortPingFormatValue=_shortPingFormatValue - In the implementation block
@property (assign,nonatomic) int nMaxIntervalThreshold;                                      //@synthesize nMaxIntervalThreshold=_nMaxIntervalThreshold - In the implementation block
@property (assign,nonatomic) int viewPatternSource;                                          //@synthesize viewPatternSource=_viewPatternSource - In the implementation block
@property (nonatomic,retain) NlsMappingDictionary * playInfoDict;                            //@synthesize playInfoDict=_playInfoDict - In the implementation block
@property (nonatomic,retain) NSMutableString * id3TagsString;                                //@synthesize id3TagsString=_id3TagsString - In the implementation block
@property (nonatomic,retain) NSString * cmsAssetId;                                          //@synthesize cmsAssetId=_cmsAssetId - In the implementation block
@property (nonatomic,retain) NlsDataProcessRequest * currentDataProcessRequest;              //@synthesize currentDataProcessRequest=_currentDataProcessRequest - In the implementation block
@property (nonatomic,copy) id handleTSVBlock;                                                //@synthesize handleTSVBlock=_handleTSVBlock - In the implementation block
@property (nonatomic,copy) id handleStationBlock;                                            //@synthesize handleStationBlock=_handleStationBlock - In the implementation block
+(int)processorTypeForProduct:(id)arg1 ;
-(id)initWithWorker:(id)arg1 withPid:(int)arg2 ;
-(void)processMetadata:(id)arg1 withArrivalTime:(double)arg2 ;
-(NlsMappingDictionary *)cmsInfoDict;
-(NlsID3Tag *)pId3Tag;
-(void)processStopWithArrivalTime:(double)arg1 ;
-(int)nMinIntervalThreshold;
-(void)processPlayheadPosition:(long long)arg1 withArrivalTime:(double)arg2 ;
-(char)createPingForDictionary:(id)arg1 withArrivalTime:(double)arg2 ;
-(NSObject*<OS_dispatch_queue>)dataGetTsvQueue;
-(NlsApiWorker *)apiWorker;
-(NSDictionary *)tagConfigDefaultDict;
-(NSObject*<OS_dispatch_queue>)dataTransferQueue;
-(double)backgroundThreshold;
-(void)processStart:(id)arg1 withArrivalTime:(double)arg2 ;
-(void)processID3:(id)arg1 withArrivalTime:(double)arg2 ;
-(void)setApiWorker:(NlsApiWorker *)arg1 ;
-(int)shortPingFormatValue;
-(int)defaultSegmentNumber;
-(void)setShortPingFormatValue:(int)arg1 ;
-(void)setDefaultSegmentNumber:(int)arg1 ;
-(void)setPausePattern:(char)arg1 ;
-(void)setProcessorId:(int)arg1 ;
-(void)setId3TagsString:(NSMutableString *)arg1 ;
-(void)setId3sequence:(int)arg1 ;
-(void)setId3FirstTs:(double)arg1 ;
-(void)setMsgCache:(NlsCache *)arg1 ;
-(void)setDisableFlag:(char)arg1 ;
-(void)setDataProcessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataCacheQueue;
-(void)setDataCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDataTransferQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDataGetTsvQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)processorId;
-(void)setTagConfigDefaultDict:(NSDictionary *)arg1 ;
-(void)setCmsInfoDict:(NlsMappingDictionary *)arg1 ;
-(void)setProcessorType:(int)arg1 ;
-(int)processorType;
-(int)getTagConfigIntValue:(id)arg1 withDefault:(int)arg2 ;
-(NSString *)cadence;
-(void)newPatternObject;
-(void)updateTSVWithDictionary:(id)arg1 ;
-(void)setHandleTSVBlock:(id)arg1 ;
-(void)updateStationIdWithDictionary:(id)arg1 ;
-(void)setHandleStationBlock:(id)arg1 ;
-(NSString *)cidNull;
-(int)segmentLength;
-(int)segmentBaseDuration;
-(int)creditValue;
-(NSString *)defaultBreakout;
-(int)nSendQual;
-(int)inSessionType;
-(int)nMaxIntervalThreshold;
-(NSString *)nolTimer;
-(void)setPId3Tag:(NlsID3Tag *)arg1 ;
-(NlsDataProcessRequest *)currentDataProcessRequest;
-(void)setCurrentDataProcessRequest:(NlsDataProcessRequest *)arg1 ;
-(NlsMappingDictionary *)playInfoDict;
-(void)setPlayInfoDict:(NlsMappingDictionary *)arg1 ;
-(void)flushPending:(double)arg1 onBG:(char)arg2 forceUpload:(char)arg3 ;
-(BOOL)cacheID3RawString:(id)arg1 ;
-(char)disableFlag;
-(BOOL)chkDisable:(id)arg1 ;
-(id)handleTSVBlock;
-(void)setViewPatternSource:(int)arg1 ;
-(int)viewPatternSource;
-(void)setSegmentPrefix:(NSString *)arg1 ;
-(void)setCurrentPingCount:(int)arg1 ;
-(long long)adjustPosition:(long long)arg1 serverBaseTime:(id)arg2 deviceBaseTime:(id)arg3 ;
-(char)delayedPings;
-(NSMutableString *)id3TagsString;
-(NSString *)id3Delimiter;
-(int)maxTpLength;
-(int)currentPingCount;
-(BOOL)sendID3Ping:(double)arg1 withImmed:(BOOL)arg2 ;
-(char)pausePattern;
-(NSString *)cmsAssetId;
-(id)handleStationBlock;
-(void)setCmsAssetId:(NSString *)arg1 ;
-(void)resumePattern:(double)arg1 ;
-(void)pausePattern:(double)arg1 ;
-(void)storePingForUploadWithDict:(id)arg1 messageType:(int)arg2 arrivalTime:(double)arg3 processorId:(int)arg4 ;
-(NSString *)creditFlag;
-(NSString *)segmentPrefix;
-(NSString *)shortPingPrefix;
-(char)nolVariablesWithTimer:(long long)arg1 serverBaseTime:(id)arg2 deviceBaseTime:(id)arg3 ;
-(int)id3sequence;
-(double)id3FirstTs;
-(id)processIAG:(id)arg1 ;
-(void)processShutdownWithArrivalTime:(double)arg1 forceUpload:(char)arg2 ;
-(void)updateMuteState;
-(NSObject*<OS_dispatch_queue>)dataProcessQueue;
-(void)setBackgroundThreshold:(double)arg1 ;
-(void)setNMinIntervalThreshold:(int)arg1 ;
-(void)setMaxPingCount:(int)arg1 ;
-(void)setInSessionType:(int)arg1 ;
-(NlsCache *)msgCache;
-(void)setDelayedPings:(char)arg1 ;
-(void)setId3Delimiter:(NSString *)arg1 ;
-(void)setCadence:(NSString *)arg1 ;
-(void)setNolTimer:(NSString *)arg1 ;
-(void)setCreditValue:(int)arg1 ;
-(void)setSegmentLength:(int)arg1 ;
-(void)setSegmentBaseDuration:(int)arg1 ;
-(void)setCidNull:(NSString *)arg1 ;
-(void)setDefaultBreakout:(NSString *)arg1 ;
-(void)setCreditFlag:(NSString *)arg1 ;
-(void)setShortPingPrefix:(NSString *)arg1 ;
-(void)setNSendQual:(int)arg1 ;
-(void)setMaxTpLength:(int)arg1 ;
-(void)setNMaxIntervalThreshold:(int)arg1 ;
-(int)maxPingCount;
-(void)dealloc;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NlsMeterConfig *)config;
-(void)setConfig:(NlsMeterConfig *)arg1 ;
@end

