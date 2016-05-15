/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/CLSURLSessionDownloadDelegate.h>

@protocol NSURLSessionDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSURLSessionConfiguration, NSMutableSet, NSObject, NSString;

@interface CLSURLSession : NSObject <CLSURLSessionDownloadDelegate> {

	id<NSURLSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSURLSessionConfiguration* _configuration;
	NSMutableSet* _taskSet;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _sessionDescription;

}

@property (nonatomic,retain) NSOperationQueue * delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id<NSURLSessionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * sessionDescription;                          //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)NSURLSessionShouldBeUsed;
+(id)newDefaultDelegateQueue;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
+(id)sessionWithConfiguration:(id)arg1 ;
-(void)downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)task:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)task:(id)arg1 didReceiveData:(id)arg2 ;
-(void)configureTask:(id)arg1 withRequest:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)shouldInvokeDelegateSelector:(SEL)arg1 forTask:(id)arg2 ;
-(void)removeTaskFromSet:(id)arg1 ;
-(id)task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 ;
-(NSOperationQueue *)delegateQueue;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)sessionDescription;
-(void)setSessionDescription:(NSString *)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)setDelegate:(id<NSURLSessionDelegate>)arg1 ;
-(id)init;
-(id<NSURLSessionDelegate>)delegate;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)invalidateAndCancel;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishTasksAndInvalidate;
-(id)downloadTaskWithURL:(id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
@end

