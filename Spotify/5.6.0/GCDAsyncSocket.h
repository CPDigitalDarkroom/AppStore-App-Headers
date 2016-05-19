/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Spotify/Spotify-Structs.h>
@class NSObject, NSData, NSMutableArray, GCDAsyncReadPacket, GCDAsyncWritePacket, GCDAsyncSocketPreBuffer, NSString;

@interface GCDAsyncSocket : NSObject {

	unsigned flags;
	unsigned short config;
	id delegate;
	NSObject*<OS_dispatch_queue> delegateQueue;
	int socket4FD;
	int socket6FD;
	int stateIndex;
	NSData* connectInterface4;
	NSData* connectInterface6;
	NSObject*<OS_dispatch_queue> socketQueue;
	NSObject*<OS_dispatch_source> accept4Source;
	NSObject*<OS_dispatch_source> accept6Source;
	NSObject*<OS_dispatch_source> connectTimer;
	NSObject*<OS_dispatch_source> readSource;
	NSObject*<OS_dispatch_source> writeSource;
	NSObject*<OS_dispatch_source> readTimer;
	NSObject*<OS_dispatch_source> writeTimer;
	NSMutableArray* readQueue;
	NSMutableArray* writeQueue;
	GCDAsyncReadPacket* currentRead;
	GCDAsyncWritePacket* currentWrite;
	unsigned long socketFDBytesAvailable;
	GCDAsyncSocketPreBuffer* preBuffer;
	SCD_Struct_GC35* streamContext;
	CFReadStreamRef readStream;
	CFWriteStreamRef writeStream;
	SSLContextRef sslContext;
	GCDAsyncSocketPreBuffer* sslPreBuffer;
	unsigned long sslWriteCachedLength;
	long sslErrCode;
	void* IsOnSocketQueueOrTargetQueueKey;
	id userData;

}

@property (__weak) id delegate; 
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (getter=isIPv4Enabled) char IPv4Enabled; 
@property (getter=isIPv6Enabled) char IPv6Enabled; 
@property (getter=isIPv4PreferredOverIPv6) char IPv4PreferredOverIPv6; 
@property (retain) id userData; 
@property (readonly) char isDisconnected; 
@property (readonly) char isConnected; 
@property (readonly) NSString * connectedHost; 
@property (readonly) unsigned short connectedPort; 
@property (readonly) NSString * localHost; 
@property (readonly) unsigned short localPort; 
@property (readonly) NSData * connectedAddress; 
@property (readonly) NSData * localAddress; 
@property (readonly) char isIPv4; 
@property (readonly) char isIPv6; 
@property (readonly) char isSecure; 
@property (assign) char autoDisconnectOnClosedReadStream; 
+(id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id*)arg3 ;
+(char)isIPv4Address:(id)arg1 ;
+(char)isIPv6Address:(id)arg1 ;
+(unsigned short)portFromAddress:(id)arg1 ;
+(id)hostFromSockaddr4:(const sockaddr_in*)arg1 ;
+(id)hostFromSockaddr6:(const sockaddr_in6*)arg1 ;
+(unsigned short)portFromSockaddr4:(const sockaddr_in*)arg1 ;
+(unsigned short)portFromSockaddr6:(const sockaddr_in6*)arg1 ;
+(void)cfstreamThread;
+(void)startCFStreamThreadIfNeeded;
+(void)scheduleCFStreams:(id)arg1 ;
+(void)unscheduleCFStreams:(id)arg1 ;
+(void)stopCFStreamThreadIfNeeded;
+(id)gaiError:(int)arg1 ;
+(char)getHost:(id*)arg1 port:(unsigned short*)arg2 fromAddress:(id)arg3 ;
+(char)getHost:(id*)arg1 port:(unsigned short*)arg2 family:(char*)arg3 fromAddress:(id)arg4 ;
+(id)hostFromAddress:(id)arg1 ;
+(id)CRLFData;
+(id)CRData;
+(id)LFData;
+(id)ZeroData;
+(void)ignore:(id)arg1 ;
-(char)openStreams;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3 ;
-(void)setDelegate:(id)arg1 synchronously:(char)arg2 ;
-(void)setDelegateQueue:(id)arg1 synchronously:(char)arg2 ;
-(void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(char)arg3 ;
-(char)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id*)arg3 ;
-(id)errnoErrorWithReason:(id)arg1 ;
-(id)badConfigError:(id)arg1 ;
-(void)getInterfaceAddress4:(id*)arg1 address6:(id*)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4 ;
-(id)badParamError:(id)arg1 ;
-(unsigned short)localPort4;
-(char)doAccept:(int)arg1 ;
-(void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1 ;
-(char)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id*)arg4 ;
-(char)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id*)arg5 ;
-(char)preConnectWithInterface:(id)arg1 error:(id*)arg2 ;
-(void)lookup:(int)arg1 didFail:(id)arg2 ;
-(void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3 ;
-(void)startConnectTimeout:(double)arg1 ;
-(char)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id*)arg4 ;
-(char)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id*)arg3 ;
-(id)otherError:(id)arg1 ;
-(void)endConnectTimeout;
-(void)didConnect:(int)arg1 ;
-(void)didNotConnect:(int)arg1 error:(id)arg2 ;
-(char)createReadAndWriteStream;
-(char)registerForStreamCallbacksIncludingReadWrite:(char)arg1 ;
-(char)addStreamsToRunLoop;
-(NSString *)connectedHost;
-(unsigned short)connectedPort;
-(void)maybeDequeueRead;
-(void)maybeDequeueWrite;
-(void)doConnectTimeout;
-(id)connectTimeoutError;
-(void)endCurrentRead;
-(void)endCurrentWrite;
-(void)removeStreamsFromRunLoop;
-(void)resumeWriteSource;
-(void)maybeClose;
-(id)connectedHostFromSocket4:(int)arg1 ;
-(id)connectedHostFromSocket6:(int)arg1 ;
-(unsigned short)connectedPortFromSocket4:(int)arg1 ;
-(unsigned short)connectedPortFromSocket6:(int)arg1 ;
-(id)localHostFromSocket4:(int)arg1 ;
-(id)localHostFromSocket6:(int)arg1 ;
-(unsigned short)localPortFromSocket4:(int)arg1 ;
-(unsigned short)localPortFromSocket6:(int)arg1 ;
-(void)doReadData;
-(void)doReadEOF;
-(void)doWriteData;
-(void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned)arg3 maxLength:(unsigned)arg4 tag:(long)arg5 ;
-(void)readDataToLength:(unsigned)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned)arg4 tag:(long)arg5 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned)arg4 maxLength:(unsigned)arg5 tag:(long)arg6 ;
-(void)maybeStartTLS;
-(void)setupReadTimerWithTimeout:(double)arg1 ;
-(void)flushSSLBuffers;
-(char)usingCFStreamForTLS;
-(char)usingSecureTransportForTLS;
-(void)ssl_continueSSLHandshake;
-(id)readMaxedOutError;
-(id)sslError:(long)arg1 ;
-(void)completeCurrentRead;
-(id)connectionClosedError;
-(void)doReadTimeout;
-(void)doReadTimeoutWithExtension:(double)arg1 ;
-(id)readTimeoutError;
-(void)setupWriteTimerWithTimeout:(double)arg1 ;
-(void)suspendWriteSource;
-(void)completeCurrentWrite;
-(void)doWriteTimeout;
-(void)doWriteTimeoutWithExtension:(double)arg1 ;
-(id)writeTimeoutError;
-(void)ssl_startTLS;
-(void)cf_startTLS;
-(void)ssl_shouldTrustPeer:(char)arg1 stateIndex:(int)arg2 ;
-(char)enableBackgroundingOnSocketWithCaveat:(char)arg1 ;
-(id)initWithSocketQueue:(id)arg1 ;
-(void)synchronouslySetDelegate:(id)arg1 ;
-(void)synchronouslySetDelegateQueue:(id)arg1 ;
-(void)getDelegate:(id*)arg1 delegateQueue:(id*)arg2 ;
-(void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(char)isIPv4Enabled;
-(void)setIPv4Enabled:(char)arg1 ;
-(char)isIPv6Enabled;
-(void)setIPv6Enabled:(char)arg1 ;
-(char)isIPv4PreferredOverIPv6;
-(void)setIPv4PreferredOverIPv6:(char)arg1 ;
-(char)acceptOnPort:(unsigned short)arg1 error:(id*)arg2 ;
-(char)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id*)arg3 ;
-(char)connectToAddress:(id)arg1 error:(id*)arg2 ;
-(char)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id*)arg3 ;
-(void)disconnectAfterReading;
-(void)disconnectAfterWriting;
-(void)disconnectAfterReadingAndWriting;
-(id)errnoError;
-(NSString *)localHost;
-(id)connectedHost4;
-(id)connectedHost6;
-(unsigned short)connectedPort4;
-(unsigned short)connectedPort6;
-(id)localHost4;
-(id)localHost6;
-(unsigned short)localPort6;
-(NSData *)connectedAddress;
-(char)isIPv4;
-(void)readDataWithTimeout:(double)arg1 tag:(long)arg2 ;
-(void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned)arg3 tag:(long)arg4 ;
-(void)readDataToLength:(unsigned)arg1 withTimeout:(double)arg2 tag:(long)arg3 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long)arg3 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned)arg4 tag:(long)arg5 ;
-(void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned)arg3 tag:(long)arg4 ;
-(float)progressOfReadReturningTag:(long*)arg1 bytesDone:(unsigned*)arg2 total:(unsigned*)arg3 ;
-(void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long)arg3 ;
-(float)progressOfWriteReturningTag:(long*)arg1 bytesDone:(unsigned*)arg2 total:(unsigned*)arg3 ;
-(void)startTLS:(id)arg1 ;
-(long)sslReadWithBuffer:(void*)arg1 length:(unsigned*)arg2 ;
-(long)sslWriteWithBuffer:(const void*)arg1 length:(unsigned*)arg2 ;
-(void)cf_finishSSLHandshake;
-(void)cf_abortSSLHandshake:(id)arg1 ;
-(char)autoDisconnectOnClosedReadStream;
-(void)setAutoDisconnectOnClosedReadStream:(char)arg1 ;
-(void)markSocketQueueTargetQueue:(id)arg1 ;
-(void)unmarkSocketQueueTargetQueue:(id)arg1 ;
-(int)socket4FD;
-(int)socket6FD;
-(CFReadStreamRef)readStream;
-(CFWriteStreamRef)writeStream;
-(char)enableBackgroundingOnSocket;
-(char)enableBackgroundingOnSocketWithCaveat;
-(SSLContextRef)sslContext;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(char)isDisconnected;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(char)isSecure;
-(id)userData;
-(void)setUserData:(id)arg1 ;
-(void)disconnect;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)resumeReadSource;
-(void)suspendReadSource;
-(int)socketFD;
-(char)isConnected;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)closeWithError:(id)arg1 ;
-(char)isIPv6;
-(NSData *)localAddress;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(unsigned short)localPort;
-(void)setDelegate:(id)arg1 delegateQueue:(id)arg2 ;
@end

