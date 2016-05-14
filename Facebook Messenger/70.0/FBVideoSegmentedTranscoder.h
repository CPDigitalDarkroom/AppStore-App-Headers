/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class NSURL, FBVideoTranscoderConfig, NSObject, AVAsset, NSError, FBVideoProcessor, FBVideoProcessorConfig, FBGLContext, FBVideoEdits, FBVideoSegmentedEncoder;

@interface FBVideoSegmentedTranscoder : NSObject {

	NSURL* _assetURL;
	NSURL* _outputFolderURL;
	FBVideoTranscoderConfig* _config;
	NSObject*<OS_dispatch_queue> _audioExportQueue;
	NSObject*<OS_dispatch_queue> _videoExportQueue;
	AVAsset* _asset;
	NSError* _assetLoadError;
	int _currentSegment;
	FBVideoAssetExportParams _segmentParams;
	FBVideoAssetExportParams _currentVideoSegmentParams;
	FBVideoAssetExportParams _currentAudioSegmentParams;
	SCD_Struct_FB51 _lastSegmentPresentationTime;
	/*^block*/id _segmentCompletionBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _completionBlock;
	double _totalProgress;
	FBVideoProcessor* _videoProcessor;
	FBVideoProcessorConfig* _videoProcessorConfig;
	FBGLContext* _openGLContext;
	FBVideoEdits* _videoEdits;
	FBVideoSegmentedEncoder* _audioEncoder;
	FBVideoSegmentedEncoder* _videoEncoder;
	long long _estimatedOutputFileLength;
	SCD_Struct_FB51 _outputDuration;

}

@property (nonatomic,readonly) long long estimatedOutputFileLength;              //@synthesize estimatedOutputFileLength=_estimatedOutputFileLength - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB51 outputDuration;                   //@synthesize outputDuration=_outputDuration - In the implementation block
-(long long)estimatedFileSize;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithAssetURL:(id)arg1 outputFolderURL:(id)arg2 videoEdits:(id)arg3 config:(id)arg4 ;
-(void)transcodeWithProgress:(/*^block*/id)arg1 segmentCompletion:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(SCD_Struct_FB51)outputDuration;
-(char)_shouldExportAudio;
-(id)setupAudioExport;
-(id)prepareNextVideoSegment;
-(id)startEncoding;
-(char)_isAudioTrackPresent;
-(void)startVideoEncoding:(/*^block*/id)arg1 segmentCompletionCallback:(/*^block*/id)arg2 ;
-(void)startAudioEncoding:(/*^block*/id)arg1 segmentCompletionCallback:(/*^block*/id)arg2 ;
-(void)didUpdatePresentationTime:(SCD_Struct_FB51)arg1 ;
-(void)onVideoSegmentCompleted:(id)arg1 error:(id)arg2 atPresentationTime:(SCD_Struct_FB51)arg3 callback:(/*^block*/id)arg4 segmentCompletionCallback:(/*^block*/id)arg5 ;
-(void)onComplete:(id)arg1 ;
-(void)_updateVideoEditsWithTrackTransform;
-(void)setupBackgroundingNotificationHandlers;
-(id)setupVideoExport;
-(char)_shouldSegmentOutput;
-(id)prepareNextAudioSegment;
-(void)_closeFiles;
-(long long)estimatedOutputFileLength;
-(void)dealloc;
-(void)_applicationWillResignActive:(id)arg1 ;
@end

