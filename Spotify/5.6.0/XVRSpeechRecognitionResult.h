/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class XAAction, NSString, NSArray, NSDictionary;

@interface XVRSpeechRecognitionResult : NSObject {

	int _result;
	XAAction* _recognizedAction;
	NSString* _rejectReason;
	NSArray* _audioLevels;
	NSString* _recognizedWords;
	NSString* _resultText;
	NSDictionary* _rawRecognitionData;
	double _confidenceLevel;

}

@property (nonatomic,readonly) int result;                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) XAAction * recognizedAction;                    //@synthesize recognizedAction=_recognizedAction - In the implementation block
@property (nonatomic,readonly) NSString * rejectReason;                        //@synthesize rejectReason=_rejectReason - In the implementation block
@property (nonatomic,readonly) NSArray * audioLevels;                          //@synthesize audioLevels=_audioLevels - In the implementation block
@property (assign,nonatomic) double confidenceLevel;                           //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
@property (nonatomic,readonly) NSString * recognizedWords;                     //@synthesize recognizedWords=_recognizedWords - In the implementation block
@property (nonatomic,readonly) NSString * resultText;                          //@synthesize resultText=_resultText - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawRecognitionData;              //@synthesize rawRecognitionData=_rawRecognitionData - In the implementation block
-(id)init:(int)arg1 withAction:(id)arg2 confidence:(double)arg3 audioLevels:(id)arg4 recognizedWords:(id)arg5 resultText:(id)arg6 rawRecognition:(id)arg7 rejectReason:(id)arg8 ;
-(id)init:(int)arg1 withAction:(id)arg2 rejectReason:(id)arg3 ;
-(NSString *)resultText;
-(NSDictionary *)rawRecognitionData;
-(XAAction *)recognizedAction;
-(id)init:(int)arg1 withAction:(id)arg2 confidence:(double)arg3 rejectReason:(id)arg4 ;
-(id)rawRecognitionDataAsString;
-(NSString *)rejectReason;
-(NSString *)recognizedWords;
-(id)description;
-(int)result;
-(NSArray *)audioLevels;
-(double)confidenceLevel;
-(void)setConfidenceLevel:(double)arg1 ;
@end

