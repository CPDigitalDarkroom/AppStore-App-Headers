/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSystemAudioSessionManagerListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAudioSessionManagerClient.h>

@protocol FBWebRTCVoipAudioSessionDelegate;
@class NSString;

@interface FBWebRTCVoipAudioSession : NSObject <FBSystemAudioSessionManagerListener, FBAudioSessionManagerClient> {

	char _receiverDisabled;
	char _speakerphoneForced;
	int _audioSessionActiveCount;
	char _isActive;
	char _outputCanBeMixed;
	char _isExternal;
	char _isBluetooth;
	id<FBWebRTCVoipAudioSessionDelegate> _delegate;

}

@property (assign,nonatomic) char isActive;                                                     //@synthesize isActive=_isActive - In the implementation block
@property (assign) char isExternal;                                                             //@synthesize isExternal=_isExternal - In the implementation block
@property (assign) char isBluetooth;                                                            //@synthesize isBluetooth=_isBluetooth - In the implementation block
@property (nonatomic,readonly) char hasBuiltInReceiver; 
@property (getter=isReceiverDisabled) char receiverDisabled; 
@property (getter=isSpeakerphoneForced) char speakerphoneForced; 
@property (assign,nonatomic) char outputCanBeMixed;                                             //@synthesize outputCanBeMixed=_outputCanBeMixed - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCVoipAudioSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned audioDirection; 
@property (nonatomic,readonly) unsigned outputCoordinationMode; 
@property (nonatomic,readonly) unsigned outputOptions; 
@property (nonatomic,readonly) unsigned inputOptions; 
@property (nonatomic,readonly) unsigned clientPriority; 
-(void)setSpeakerphoneForced:(char)arg1 ;
-(void)startAudioSessionWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)finishInterruptionAndResume:(char)arg1 ;
-(unsigned)audioDirection;
-(unsigned)outputCoordinationMode;
-(unsigned)outputOptions;
-(unsigned)inputOptions;
-(char)hasBuiltInReceiver;
-(void)retainAudioSession;
-(void)setOutputCanBeMixed:(char)arg1 ;
-(void)setReceiverDisabled:(char)arg1 ;
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)_completeAudioSessionActivationWithSuccessBlock:(/*^block*/id)arg1 ;
-(void)_incrementAudioSessionCount;
-(char)_decrementAudioSessionCount;
-(void)_setSpeakerphoneForcedSychronized:(char)arg1 ;
-(void)_reinitializeSpeakerMode;
-(void)_setReceiverDisabledSynchronized:(char)arg1 ;
-(char)_isCurrentlySpeakerphone;
-(char)isSpeakerphoneForced;
-(char)isReceiverDisabled;
-(void)setIsBluetooth:(char)arg1 ;
-(char)_shouldOverrideSpeaker;
-(char)_isCurrentlyReceiver;
-(char)outputCanBeMixed;
-(void)beginInterruption;
-(void)setDelegate:(id<FBWebRTCVoipAudioSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebRTCVoipAudioSessionDelegate>)delegate;
-(char)isActive;
-(void)setIsActive:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isExternal;
-(void)releaseAudioSession;
-(unsigned)clientPriority;
-(void)setIsExternal:(char)arg1 ;
-(char)isBluetooth;
@end

