/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/XVRRecognizer.h>

@protocol XVRSpeechToText, XVRReceiver, XVRSamplingAlgorithm;
@class NSDictionary, NSArray, NSString, NSMutableArray, NSTimer;

@interface XVRDefaultRecognizer : NSObject <XVRRecognizer> {

	BOOL _debugEnabled;
	BOOL _speechDetected;
	int _captureType;
	NSDictionary* _configurationParameters;
	NSArray* _phrases;
	id<XVRSpeechToText> _speechToText;
	int _speechToTextType;
	int _sampleRate;
	NSString* _type;
	xvr_audio_state_t* _audio_state;
	id<XVRReceiver> _receiver;
	NSString* _recordingPath;
	NSDictionary* _userData;
	NSMutableArray* _calibrationArray;
	id<XVRSamplingAlgorithm> _samplingAlgorithm;
	NSTimer* _endPointerTimer;
	NSMutableArray* _inputLevels;
	int _speechStartedSample;
	/*^block*/id _tearDownCompletionBlock;
	/*^block*/id _speechDataBlock;
	/*^block*/id _resultBlock;
	double _confidenceLevelThreshold;
	double _speechRecognitionStartTime;

}

@property (assign) xvr_audio_state_t* audio_state;                          //@synthesize audio_state=_audio_state - In the implementation block
@property (retain) id<XVRReceiver> receiver;                                //@synthesize receiver=_receiver - In the implementation block
@property (retain) NSString * recordingPath;                                //@synthesize recordingPath=_recordingPath - In the implementation block
@property (assign) BOOL speechDetected;                                     //@synthesize speechDetected=_speechDetected - In the implementation block
@property (retain) NSDictionary * userData;                                 //@synthesize userData=_userData - In the implementation block
@property (retain) NSMutableArray * calibrationArray;                       //@synthesize calibrationArray=_calibrationArray - In the implementation block
@property (retain) id<XVRSamplingAlgorithm> samplingAlgorithm;              //@synthesize samplingAlgorithm=_samplingAlgorithm - In the implementation block
@property (retain) NSTimer * endPointerTimer;                               //@synthesize endPointerTimer=_endPointerTimer - In the implementation block
@property (retain) NSMutableArray * inputLevels;                            //@synthesize inputLevels=_inputLevels - In the implementation block
@property (assign) int speechStartedSample;                                 //@synthesize speechStartedSample=_speechStartedSample - In the implementation block
@property (assign) double speechRecognitionStartTime;                       //@synthesize speechRecognitionStartTime=_speechRecognitionStartTime - In the implementation block
@property (nonatomic,copy) id tearDownCompletionBlock;                      //@synthesize tearDownCompletionBlock=_tearDownCompletionBlock - In the implementation block
@property (nonatomic,copy) id speechDataBlock;                              //@synthesize speechDataBlock=_speechDataBlock - In the implementation block
@property (nonatomic,copy) id resultBlock;                                  //@synthesize resultBlock=_resultBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int captureType;                                         //@synthesize captureType=_captureType - In the implementation block
@property (assign) BOOL debugEnabled;                                       //@synthesize debugEnabled=_debugEnabled - In the implementation block
@property (retain) NSArray * phrases;                                       //@synthesize phrases=_phrases - In the implementation block
@property (retain) id<XVRSpeechToText> speechToText;                        //@synthesize speechToText=_speechToText - In the implementation block
@property (assign) int speechToTextType;                                    //@synthesize speechToTextType=_speechToTextType - In the implementation block
@property (assign) int sampleRate;                                          //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign) double confidenceLevelThreshold;                         //@synthesize confidenceLevelThreshold=_confidenceLevelThreshold - In the implementation block
@property (retain) NSString * type;                                         //@synthesize type=_type - In the implementation block
@property (retain) NSDictionary * configurationParameters;                  //@synthesize configurationParameters=_configurationParameters - In the implementation block
@property (retain) NSString * xvrUrl; 
-(int)maxInitialSilence;
-(int)maxSpeechDuration;
-(void)prepareEngine;
-(id)inputAudioRoute;
-(int)minEndingSilence;
-(id)initWithSpeechToText:(int)arg1 sampleRate:(int)arg2 ;
-(void)setConfigurationParameters:(NSDictionary *)arg1 ;
-(void)setXvrUrl:(NSString *)arg1 ;
-(void)startListeningForPhrases:(id)arg1 withUserData:(id)arg2 speechData:(/*^block*/id)arg3 speechResult:(/*^block*/id)arg4 ;
-(void)cancelWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startListeningForPhrases:(id)arg1 speechData:(/*^block*/id)arg2 speechResult:(/*^block*/id)arg3 ;
-(int)captureType;
-(void)setCaptureType:(int)arg1 ;
-(id<XVRSpeechToText>)speechToText;
-(void)setSpeechToText:(id<XVRSpeechToText>)arg1 ;
-(int)speechToTextType;
-(void)setSpeechToTextType:(int)arg1 ;
-(double)confidenceLevelThreshold;
-(void)setConfidenceLevelThreshold:(double)arg1 ;
-(NSDictionary *)configurationParameters;
-(NSString *)xvrUrl;
-(void)speechToTextCompleted;
-(BOOL)speechDetected;
-(void)setSpeechDetected:(BOOL)arg1 ;
-(void)setSamplingAlgorithm:(id<XVRSamplingAlgorithm>)arg1 ;
-(int)maxRecordingLength;
-(void)setAudio_state:(xvr_audio_state_t*)arg1 ;
-(void)setSpeechDataBlock:(id)arg1 ;
-(xvr_audio_state_t*)audio_state;
-(void)setRecordingPath:(NSString *)arg1 ;
-(void)endPointerTimerCallback;
-(void)setEndPointerTimer:(NSTimer *)arg1 ;
-(void)stopListeningWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setTearDownCompletionBlock:(id)arg1 ;
-(void)setSpeechRecognitionStartTime:(double)arg1 ;
-(NSTimer *)endPointerTimer;
-(id)tearDownCompletionBlock;
-(id)speechDataBlock;
-(id<XVRSamplingAlgorithm>)samplingAlgorithm;
-(int)speechStartedSample;
-(void)setSpeechStartedSample:(int)arg1 ;
-(AudioStreamBasicDescription)inputAudioDescription;
-(NSString *)recordingPath;
-(NSMutableArray *)calibrationArray;
-(void)setCalibrationArray:(NSMutableArray *)arg1 ;
-(double)speechRecognitionStartTime;
-(void)setReceiver:(id<XVRReceiver>)arg1 ;
-(id<XVRReceiver>)receiver;
-(id)init;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setSampleRate:(int)arg1 ;
-(int)sampleRate;
-(NSDictionary *)userData;
-(void)setUserData:(NSDictionary *)arg1 ;
-(void)setDebugEnabled:(BOOL)arg1 ;
-(BOOL)debugEnabled;
-(NSArray *)phrases;
-(void)setPhrases:(NSArray *)arg1 ;
-(void)setInputLevels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)inputLevels;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)inputLevel;
@end

