/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SDLProtocolListener.h>

@class SDLAbstractProtocol, NSString;

@interface SDLStreamingMediaManager : NSObject <SDLProtocolListener> {

	char _videoSessionConnected;
	char _audioSessionConnected;
	OpaqueVTCompressionSessionRef _compressionSession;
	unsigned _currentFrameNumber;
	SDLAbstractProtocol* _protocol;
	/*^block*/id _videoStartBlock;
	/*^block*/id _audioStartBlock;

}

@property (assign,nonatomic) char videoSessionConnected;                                    //@synthesize videoSessionConnected=_videoSessionConnected - In the implementation block
@property (assign,nonatomic) char audioSessionConnected;                                    //@synthesize audioSessionConnected=_audioSessionConnected - In the implementation block
@property (assign,nonatomic) OpaqueVTCompressionSessionRef compressionSession;              //@synthesize compressionSession=_compressionSession - In the implementation block
@property (assign,nonatomic) unsigned currentFrameNumber;                                   //@synthesize currentFrameNumber=_currentFrameNumber - In the implementation block
@property (assign,nonatomic,__weak) SDLAbstractProtocol * protocol;                         //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,copy) id videoStartBlock;                                              //@synthesize videoStartBlock=_videoStartBlock - In the implementation block
@property (nonatomic,copy) id audioStartBlock;                                              //@synthesize audioStartBlock=_audioStartBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sdl_streamingDataSerialQueue;
+(id)sdl_encodeElementaryStreamWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)handleProtocolStartSessionACK:(unsigned char)arg1 sessionID:(unsigned char)arg2 version:(unsigned char)arg3 ;
-(void)handleProtocolStartSessionNACK:(unsigned char)arg1 ;
-(void)handleProtocolEndSessionACK:(unsigned char)arg1 ;
-(void)handleProtocolEndSessionNACK:(unsigned char)arg1 ;
-(void)setVideoStartBlock:(id)arg1 ;
-(char)videoSessionConnected;
-(void)setAudioStartBlock:(id)arg1 ;
-(char)audioSessionConnected;
-(unsigned)currentFrameNumber;
-(void)setCurrentFrameNumber:(unsigned)arg1 ;
-(void)setAudioSessionConnected:(char)arg1 ;
-(id)audioStartBlock;
-(char)sdl_configureVideoEncoderWithError:(id*)arg1 ;
-(void)sdl_teardownCompressionSession;
-(id)videoStartBlock;
-(void)setVideoSessionConnected:(char)arg1 ;
-(OpaqueVTCompressionSessionRef)compressionSession;
-(void)startVideoSessionWithStartBlock:(/*^block*/id)arg1 ;
-(void)stopVideoSession;
-(void)startAudioStreamingWithStartBlock:(/*^block*/id)arg1 ;
-(char)sendVideoData:(CVBufferRef)arg1 ;
-(char)sendAudioData:(id)arg1 ;
-(void)setCompressionSession:(OpaqueVTCompressionSessionRef)arg1 ;
-(SDLAbstractProtocol *)protocol;
-(void)stopAudioSession;
-(id)initWithProtocol:(id)arg1 ;
-(void)setProtocol:(SDLAbstractProtocol *)arg1 ;
@end

