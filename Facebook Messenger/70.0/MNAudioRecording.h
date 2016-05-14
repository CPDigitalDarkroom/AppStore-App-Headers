/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol MNAudioRecording <NSObject>
@property (assign,getter=isMeteringEnabled,nonatomic) char meteringEnabled; 
@property (getter=isRecording,nonatomic,readonly) char recording; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) NSURL * url; 
@property (assign,nonatomic) id<MNAudioRecordingDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,copy,readonly) NSString * fileMimeType; 
@required
-(NSString *)fileMimeType;
-(char)isMeteringEnabled;
-(char)prepareToRecord;
-(double)currentTime;
-(char)record;
-(void)setDelegate:(id)arg1;
-(id<MNAudioRecordingDelegate>)delegate;
-(NSURL *)url;
-(void)stop;
-(id)initWithURL:(id)arg1 error:(id*)arg2;
-(char)isRecording;
-(void)setMeteringEnabled:(char)arg1;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned)arg1;
-(NSString *)fileExtension;

@end

