/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, GNSAudioEncoding;
#import <Spotify/Spotify-Structs.h>
@class NSObject, AVCaptureSession, GNSBroadcasterDetectionSession;

@interface GNSAudioRecorder : NSObject {

	NSObject*<OS_dispatch_queue> _decoderQueue;
	/*^block*/id _tokensHandler;
	/*^block*/id _listenerStoppedHandler;
	/*^block*/id _errorHandler;
	AVCaptureSession* _captureSession;
	int _sampleCount;
	id<GNSAudioEncoding> _encoding;
	GNSBroadcasterDetectionSession* _broadcasterDetectionSession;
	OpaqueAudioQueueRef _audioQueue;
	AudioModemDecoder* _decoder;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> decoderQueue;                                 //@synthesize decoderQueue=_decoderQueue - In the implementation block
@property (nonatomic,copy) id tokensHandler;                                                            //@synthesize tokensHandler=_tokensHandler - In the implementation block
@property (nonatomic,copy) id listenerStoppedHandler;                                                   //@synthesize listenerStoppedHandler=_listenerStoppedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                                             //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,retain) AVCaptureSession * captureSession;                                         //@synthesize captureSession=_captureSession - In the implementation block
@property (assign,nonatomic) int sampleCount;                                                           //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,retain) id<GNSAudioEncoding> encoding;                                             //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,retain) GNSBroadcasterDetectionSession * broadcasterDetectionSession;              //@synthesize broadcasterDetectionSession=_broadcasterDetectionSession - In the implementation block
@property (assign,nonatomic) OpaqueAudioQueueRef audioQueue;                                            //@synthesize audioQueue=_audioQueue - In the implementation block
@property (assign,nonatomic) AudioModemDecoder* decoder;                                                //@synthesize decoder=_decoder - In the implementation block
-(id)listenerStoppedHandler;
-(void)listenForTokensWithEncoding:(id)arg1 tokensReceivedHandler:(/*^block*/id)arg2 listenerStoppedHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)setListenerStoppedHandler:(id)arg1 ;
-(void)listenForBroadcasterWithTimeout:(double)arg1 onBroadcasterFound:(/*^block*/id)arg2 onBroadcasterNotFound:(/*^block*/id)arg3 ;
-(OpaqueAudioQueueRef)audioQueue;
-(void)setAudioQueue:(OpaqueAudioQueueRef)arg1 ;
-(void)setTokensHandler:(id)arg1 ;
-(double)hardwareSampleRate;
-(void)createAudioQueue:(id)arg1 ;
-(void)setBroadcasterDetectionSession:(GNSBroadcasterDetectionSession *)arg1 ;
-(void)destroyDecoder;
-(void)enqueueBuffer:(AudioQueueBuffer*)arg1 queue:(OpaqueAudioQueueRef)arg2 ;
-(GNSBroadcasterDetectionSession *)broadcasterDetectionSession;
-(id)tokensHandler;
-(void)audioListeningStopped;
-(void)decode:(AudioQueueBuffer*)arg1 ;
-(void)setDecoderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AudioModemDecoder*)decoder;
-(void)setDecoder:(AudioModemDecoder*)arg1 ;
-(id)init;
-(int)sampleCount;
-(void)setSampleCount:(int)arg1 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)decoderQueue;
-(id<GNSAudioEncoding>)encoding;
-(void)stopListening;
-(AVCaptureSession *)captureSession;
-(void)setCaptureSession:(AVCaptureSession *)arg1 ;
-(void)setEncoding:(id<GNSAudioEncoding>)arg1 ;
@end

