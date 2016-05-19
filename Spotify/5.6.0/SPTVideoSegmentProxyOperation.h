/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Foundation/NSOperation.h>
#import <Spotify/GCDAsyncSocketDelegate.h>
#import <Spotify/SPTDataLoaderDelegate.h>

@protocol SPTVideoSegmentProxyOperationDelegate, OS_dispatch_queue, SPTDataLoaderCancellationToken;
@class GCDAsyncSocket, NSObject, SPTDataLoader, SPTVideoSegmentProxyOperationContext, SPTask, SPTVideoCDNSelector, NSMutableData, NSString;

@interface SPTVideoSegmentProxyOperation : NSOperation <GCDAsyncSocketDelegate, SPTDataLoaderDelegate> {

	char _finished;
	char _executing;
	id<SPTVideoSegmentProxyOperationDelegate> _delegate;
	GCDAsyncSocket* _socket;
	NSObject*<OS_dispatch_queue> _workQueue;
	SPTDataLoader* _dataLoader;
	id<SPTDataLoaderCancellationToken> _cancellationToken;
	SPTVideoSegmentProxyOperationContext* _context;
	SPTask* _transmuxingTask;
	SPTVideoCDNSelector* _cdnSelector;
	CFHTTPMessageRef _requestMessage;
	CFHTTPMessageRef _responseMessage;
	NSMutableData* _receivedData;

}

@property (assign,nonatomic,__weak) id<SPTVideoSegmentProxyOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GCDAsyncSocket * socket;                                                //@synthesize socket=_socket - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) SPTDataLoader * dataLoader;                                             //@synthesize dataLoader=_dataLoader - In the implementation block
@property (nonatomic,retain) id<SPTDataLoaderCancellationToken> cancellationToken;                   //@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (nonatomic,retain) SPTVideoSegmentProxyOperationContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) SPTask * transmuxingTask;                                               //@synthesize transmuxingTask=_transmuxingTask - In the implementation block
@property (nonatomic,retain) SPTVideoCDNSelector * cdnSelector;                                      //@synthesize cdnSelector=_cdnSelector - In the implementation block
@property (assign,nonatomic) CFHTTPMessageRef requestMessage;                                        //@synthesize requestMessage=_requestMessage - In the implementation block
@property (assign,nonatomic) CFHTTPMessageRef responseMessage;                                       //@synthesize responseMessage=_responseMessage - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                                           //@synthesize receivedData=_receivedData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3 ;
-(void)socket:(id)arg1 didWriteDataWithTag:(long)arg2 ;
-(id<SPTDataLoaderCancellationToken>)cancellationToken;
-(SPTDataLoader *)dataLoader;
-(void)setCancellationToken:(id<SPTDataLoaderCancellationToken>)arg1 ;
-(void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2 ;
-(void)dataLoader:(id)arg1 didCancelRequest:(id)arg2 ;
-(char)dataLoaderShouldSupportChunks:(id)arg1 ;
-(void)dataLoader:(id)arg1 didReceiveDataChunk:(id)arg2 forResponse:(id)arg3 ;
-(void)dataLoader:(id)arg1 didReceiveInitialResponse:(id)arg2 ;
-(void)setDataLoader:(SPTDataLoader *)arg1 ;
-(SPTVideoCDNSelector *)cdnSelector;
-(void)setCdnSelector:(SPTVideoCDNSelector *)arg1 ;
-(id)initWithSocket:(id)arg1 dataLoader:(id)arg2 cdnSelector:(id)arg3 ;
-(void)finishAndCleanup;
-(void)finishWithErrorMessage:(id)arg1 statusCode:(unsigned)arg2 ;
-(char)startRequestForce:(char)arg1 ;
-(void)writeResponseHeadersWithDataLoaderResponse:(id)arg1 ;
-(void)writeChunkToSocket:(id)arg1 ;
-(void)writeFinalChunkToSocket;
-(void)setTransmuxingTask:(SPTask *)arg1 ;
-(SPTask *)transmuxingTask;
-(void)finishWithError:(id)arg1 statusCode:(unsigned)arg2 ;
-(char)writeResponseMessageWithStatusCode:(unsigned)arg1 tag:(int)arg2 headers:(id)arg3 ;
-(void)writeDataToSocket:(id)arg1 tag:(long)arg2 ;
-(CFHTTPMessageRef)requestMessage;
-(void)setRequestMessage:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)responseMessage;
-(void)setResponseMessage:(CFHTTPMessageRef)arg1 ;
-(char)isAsynchronous;
-(void)setSocket:(GCDAsyncSocket *)arg1 ;
-(GCDAsyncSocket *)socket;
-(void)cancel;
-(void)setDelegate:(id<SPTVideoSegmentProxyOperationDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SPTVideoSegmentProxyOperationDelegate>)delegate;
-(SPTVideoSegmentProxyOperationContext *)context;
-(void)start;
-(void)setContext:(SPTVideoSegmentProxyOperationContext *)arg1 ;
-(void)cleanup;
-(char)isFinished;
-(char)isExecuting;
-(void)setExecuting:(char)arg1 ;
-(void)setFinished:(char)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
@end

