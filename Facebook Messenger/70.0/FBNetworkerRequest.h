/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBResponseHandlerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBHttpRequestDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBDuplicatedFacebookAPIProperties.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBHttpRequest.h>

@protocol OS_dispatch_queue, FBRequest, FBResponseHandling, FBHttpRequestSummary, FBCallPath, FBNetworkerRequestDelegate, FBHttpRequestToken;
@class NSObject, NSURLRequest, NSHTTPURLResponse, NSError, NSString, FBScenePath;

@interface FBNetworkerRequest : NSObject <FBResponseHandlerDelegate, FBHttpRequestDelegate, FBDuplicatedFacebookAPIProperties, FBHttpRequest> {

	struct {
		char delegateDidStart;
		char delegateDidSucceed;
		char delegateDidFail;
		char delegateDidCancel;
		char delegateDidUpdateDownloadProgress;
		char delegateDidUpdateUploadProgress;
		char delegateDidUploadBytes;
		char delegateDidReceiveData;
		char delegateDidReceiveResponse;
		char delegateWillRetry;
	}  _flags;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBRequest> _generatedRequest;
	NSURLRequest* _generatedUrlRequest;
	char _generated;
	mutex _generationLock;
	id<FBResponseHandling> _responseHandler;
	int _attempts;
	double _requestAdd;
	NSHTTPURLResponse* _urlResponse;
	long long _bytesUp;
	long long _bytesDown;
	double _requestStart;
	double _requestEnd;
	double _responseStart;
	id<FBHttpRequestSummary> _finalSummary;
	NSError* _responseErrorOnEOM;
	char _didDeliverData;
	char _finished;
	FBNetworkerRequest* _selfDeallocGuard;
	id<FBResponseHandling> _responseHandlerDeallocGuard;
	char _allowRetry;
	char _silentLoading;
	char _disableCustomProtocols;
	char _includeAccessToken;
	char _shouldContinueInBackground;
	id<FBCallPath> _callPath;
	NSString* _actorFBID;
	NSString* _accessTokenOverride_DEPRECATED;
	FBScenePath* _scenePath;
	int _priority;
	unsigned _priorityOrder;
	id<FBNetworkerRequestDelegate> _delegate;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	NSObject*<OS_dispatch_queue> _callbackPerformer;
	NSString* _name;
	NSString* _analyticsUUID;
	unsigned _hardTimeout;
	id<FBHttpRequestToken> _currentTransactionToken;

}

@property (nonatomic,retain) id<FBHttpRequestToken> currentTransactionToken;              //@synthesize currentTransactionToken=_currentTransactionToken - In the implementation block
@property (nonatomic,retain) FBScenePath * scenePath;                                     //@synthesize scenePath=_scenePath - In the implementation block
@property (assign,nonatomic) int priority;                                                //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned priorityOrder;                                      //@synthesize priorityOrder=_priorityOrder - In the implementation block
@property (nonatomic,retain) id<FBNetworkerRequestDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id successBlock;                                               //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failureBlock;                                               //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackPerformer;              //@synthesize callbackPerformer=_callbackPerformer - In the implementation block
@property (assign,nonatomic) char allowRetry;                                             //@synthesize allowRetry=_allowRetry - In the implementation block
@property (assign,nonatomic) char silentLoading;                                          //@synthesize silentLoading=_silentLoading - In the implementation block
@property (assign,nonatomic) char disableCustomProtocols;                                 //@synthesize disableCustomProtocols=_disableCustomProtocols - In the implementation block
@property (nonatomic,retain) id<FBCallPath> callPath;                                     //@synthesize callPath=_callPath - In the implementation block
@property (nonatomic,copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsUUID;                             //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (assign,nonatomic) unsigned hardTimeout;                                        //@synthesize hardTimeout=_hardTimeout - In the implementation block
@property (assign,nonatomic) char includeAccessToken;                                     //@synthesize includeAccessToken=_includeAccessToken - In the implementation block
@property (assign,nonatomic) char shouldContinueInBackground;                             //@synthesize shouldContinueInBackground=_shouldContinueInBackground - In the implementation block
@property (nonatomic,copy) NSString * actorFBID;                                          //@synthesize actorFBID=_actorFBID - In the implementation block
@property (nonatomic,copy) NSString * accessTokenOverride_DEPRECATED;                     //@synthesize accessTokenOverride_DEPRECATED=_accessTokenOverride_DEPRECATED - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,copy,readonly) NSString * logNamespace; 
@property (nonatomic,copy,readonly) NSString * logName; 
@property (nonatomic,readonly) char shouldHandleCookies; 
@property (nonatomic,readonly) char enableAuthentication; 
@property (nonatomic,copy,readonly) NSString * actorForAuthentication; 
+(id)globalNetworkDispatcher;
-(void)setCallPath:(id<FBCallPath>)arg1 ;
-(void)setHardTimeout:(unsigned)arg1 ;
-(void)setSuccessBlock:(id)arg1 ;
-(void)setAllowRetry:(char)arg1 ;
-(id)successBlock;
-(void)setAccessTokenOverride_DEPRECATED:(NSString *)arg1 ;
-(id)networkRequest;
-(void)setIncludeAccessToken:(char)arg1 ;
-(NSString *)analyticsUUID;
-(void)setActorFBID:(NSString *)arg1 ;
-(id)initWithCallbackPerformer:(id)arg1 ;
-(char)shouldContinueInBackground;
-(void)setCallbackPerformer:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)accessTokenOverride_DEPRECATED;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(FBScenePath *)scenePath;
-(void)setShouldContinueInBackground:(char)arg1 ;
-(NSString *)actorFBID;
-(void)setDisableCustomProtocols:(char)arg1 ;
-(id<FBCallPath>)callPath;
-(NSObject*<OS_dispatch_queue>)callbackPerformer;
-(unsigned)hardTimeout;
-(char)disableCustomProtocols;
-(NSString *)logNamespace;
-(void)responseHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)responseHandler:(id)arg1 didHandleResponse:(id)arg2 finalResponse:(char)arg3 ;
-(id)initWithCallbackPerformer:(id)arg1 queue:(id)arg2 ;
-(char)allowRetry;
-(void)httpRequest:(id)arg1 didCancelWithSummary:(id)arg2 ;
-(void)setSilentLoading:(char)arg1 ;
-(unsigned)priorityOrder;
-(char)silentLoading;
-(char)enableAuthentication;
-(NSString *)actorForAuthentication;
-(void)httpRequestDidStart:(id)arg1 ;
-(void)httpRequest:(id)arg1 didUploadBytes:(long long)arg2 outOf:(long long)arg3 ;
-(void)httpRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)httpRequest:(id)arg1 didDownloadData:(id)arg2 ;
-(void)httpRequest:(id)arg1 didFinishWithSummary:(id)arg2 ;
-(void)httpRequest:(id)arg1 didFailWithError:(id)arg2 summary:(id)arg3 ;
-(void)httpRequest:(id)arg1 willRetryWithError:(id)arg2 summary:(id)arg3 ;
-(void)setPriorityOrder:(unsigned)arg1 ;
-(void)setCurrentTransactionToken:(id<FBHttpRequestToken>)arg1 ;
-(void)_performCallbackBlock:(/*^block*/id)arg1 andCleanup:(char)arg2 ;
-(char)includeAccessToken;
-(id<FBHttpRequestToken>)currentTransactionToken;
-(void)cancel;
-(void)setDelegate:(id<FBNetworkerRequestDelegate>)arg1 ;
-(id)description;
-(id<FBNetworkerRequestDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURLRequest *)request;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(NSString *)logName;
-(id)callbackQueue;
-(char)shouldHandleCookies;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
@end

