/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol CLSNetworkClientDelegate;
@class NSURLSession, NSOperationQueue, FABCertificatePinner, CLSFileManager, NSString;

@interface CLSNetworkClient : NSObject <NSURLSessionDelegate> {

	NSURLSession* _session;
	char _canUseBackgroundSession;
	id<CLSNetworkClientDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	FABCertificatePinner* _certPinner;
	/*^block*/id _backgroundCompletionHandler;
	CLSFileManager* _fileManager;

}

@property (assign,nonatomic,__weak) id<CLSNetworkClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) char supportsBackgroundRequests; 
@property (nonatomic,readonly) FABCertificatePinner * certPinner;                       //@synthesize certPinner=_certPinner - In the implementation block
@property (nonatomic,copy) id backgroundCompletionHandler;                              //@synthesize backgroundCompletionHandler=_backgroundCompletionHandler - In the implementation block
@property (nonatomic,readonly) NSURLSession * session; 
@property (assign,nonatomic) char canUseBackgroundSession;                              //@synthesize canUseBackgroundSession=_canUseBackgroundSession - In the implementation block
@property (nonatomic,retain) CLSFileManager * fileManager;                              //@synthesize fileManager=_fileManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pinner;
-(id)initWithQueue:(id)arg1 fileManager:(id)arg2 delegate:(id)arg3 ;
-(void)attemptToReconnectBackgroundSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)supportsBackgroundRequests;
-(void)startUploadRequest:(id)arg1 filePath:(id)arg2 immediately:(char)arg3 ;
-(void)setCanUseBackgroundSession:(char)arg1 ;
-(char)NSURLSessionAvailable;
-(char)canUseBackgroundSession;
-(void)startImmediateUploadRequest:(id)arg1 filePath:(id)arg2 ;
-(id)relativeTaskPathForAbsolutePath:(id)arg1 ;
-(void)startNewUploadRequest:(id)arg1 filePath:(id)arg2 ;
-(void)checkForExistingTaskMatchingDescription:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)handleTaskDescription:(id)arg1 completedWithError:(id)arg2 ;
-(char)taskArray:(id)arg1 hasTaskMatchingDescription:(id)arg2 ;
-(void)checkSession:(id)arg1 forTasksMatchingDescription:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)absolutePathForRelativeTaskPath:(id)arg1 ;
-(void)runAfterRetryValueFromResponse:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)backgroundCompletionHandler;
-(void)setBackgroundCompletionHandler:(id)arg1 ;
-(void)restartTask:(id)arg1 ;
-(void)handleTask:(id)arg1 completedWithError:(id)arg2 ;
-(FABCertificatePinner *)certPinner;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(NSURLSession *)session;
-(void)setDelegate:(id<CLSNetworkClientDelegate>)arg1 ;
-(id<CLSNetworkClientDelegate>)delegate;
-(NSOperationQueue *)operationQueue;
-(id)rootPath;
-(CLSFileManager *)fileManager;
-(void)setFileManager:(CLSFileManager *)arg1 ;
@end

