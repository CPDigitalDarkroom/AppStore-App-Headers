/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/GNSModemListener.h>

@class GNSAudioRecorder, GNSTokenListenerParams;

@interface GNSAudioListeningOperation : NSObject <GNSModemListener> {

	GNSAudioRecorder* _dsssRecorder;
	GNSAudioRecorder* _dtmfRecorder;
	GNSTokenListenerParams* _params;
	/*^block*/id _tokensReceivedHandler;
	/*^block*/id _listenerStoppedHandler;

}

@property (nonatomic,retain) GNSAudioRecorder * dsssRecorder;              //@synthesize dsssRecorder=_dsssRecorder - In the implementation block
@property (nonatomic,retain) GNSAudioRecorder * dtmfRecorder;              //@synthesize dtmfRecorder=_dtmfRecorder - In the implementation block
@property (nonatomic,retain) GNSTokenListenerParams * params;              //@synthesize params=_params - In the implementation block
@property (nonatomic,copy) id tokensReceivedHandler;                       //@synthesize tokensReceivedHandler=_tokensReceivedHandler - In the implementation block
@property (nonatomic,copy) id listenerStoppedHandler;                      //@synthesize listenerStoppedHandler=_listenerStoppedHandler - In the implementation block
-(void)setParams:(GNSTokenListenerParams *)arg1 ;
-(void)setDsssRecorder:(GNSAudioRecorder *)arg1 ;
-(GNSAudioRecorder *)dsssRecorder;
-(id)tokensReceivedHandler;
-(id)listenerStoppedHandler;
-(void)setDtmfRecorder:(GNSAudioRecorder *)arg1 ;
-(GNSAudioRecorder *)dtmfRecorder;
-(void)setTokensReceivedHandler:(id)arg1 ;
-(void)setListenerStoppedHandler:(id)arg1 ;
-(GNSTokenListenerParams *)params;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

