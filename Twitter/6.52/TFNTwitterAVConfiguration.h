/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterAVConfiguration.h>

@protocol TFNTwitterAVConfiguration <NSObject>
@property (nonatomic,readonly) char isScribeObserverEnabled; 
@property (nonatomic,readonly) char isVideoValueReportingScribeObserverEnabled; 
@property (nonatomic,readonly) char isMoatScribeObserverEnabled; 
@property (nonatomic,readonly) char isVideoTypeEngagementMetadataScribingEnabled; 
@property (nonatomic,readonly) double secondsToWaitForDynamicAd; 
@property (nonatomic,readonly) char shouldWaitForDynamicAd; 
@property (nonatomic,readonly) double viewThresholdContent; 
@required
-(char)isScribeObserverEnabled;
-(double)secondsToWaitForDynamicAd;
-(char)shouldWaitForDynamicAd;
-(double)viewThresholdContent;
-(char)isVideoValueReportingScribeObserverEnabled;
-(char)isMoatScribeObserverEnabled;
-(char)isVideoTypeEngagementMetadataScribingEnabled;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TFNTwitterAVConfiguration : NSObject <TFNTwitterAVConfiguration, NSCopying> {

	char _isScribeObserverEnabled;
	char _isVideoValueReportingScribeObserverEnabled;
	char _isMoatScribeObserverEnabled;
	char _isVideoTypeEngagementMetadataScribingEnabled;
	char _shouldWaitForDynamicAd;
	char _disableLoggingPlayFromTap;
	char _externalAudioSessionControl;
	char _hideActivityIndicator;
	int _initialMode;
	double _viewThresholdContent;
	double _secondsToWaitForDynamicAd;

}

@property (assign,nonatomic) char disableLoggingPlayFromTap;                                   //@synthesize disableLoggingPlayFromTap=_disableLoggingPlayFromTap - In the implementation block
@property (assign,nonatomic) char externalAudioSessionControl;                                 //@synthesize externalAudioSessionControl=_externalAudioSessionControl - In the implementation block
@property (assign,nonatomic) char hideActivityIndicator;                                       //@synthesize hideActivityIndicator=_hideActivityIndicator - In the implementation block
@property (assign,nonatomic) int initialMode;                                                  //@synthesize initialMode=_initialMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isScribeObserverEnabled;                                   //@synthesize isScribeObserverEnabled=_isScribeObserverEnabled - In the implementation block
@property (nonatomic,readonly) char isVideoValueReportingScribeObserverEnabled;                //@synthesize isVideoValueReportingScribeObserverEnabled=_isVideoValueReportingScribeObserverEnabled - In the implementation block
@property (nonatomic,readonly) char isMoatScribeObserverEnabled;                               //@synthesize isMoatScribeObserverEnabled=_isMoatScribeObserverEnabled - In the implementation block
@property (nonatomic,readonly) char isVideoTypeEngagementMetadataScribingEnabled;              //@synthesize isVideoTypeEngagementMetadataScribingEnabled=_isVideoTypeEngagementMetadataScribingEnabled - In the implementation block
@property (nonatomic,readonly) double secondsToWaitForDynamicAd;                               //@synthesize secondsToWaitForDynamicAd=_secondsToWaitForDynamicAd - In the implementation block
@property (nonatomic,readonly) char shouldWaitForDynamicAd;                                    //@synthesize shouldWaitForDynamicAd=_shouldWaitForDynamicAd - In the implementation block
@property (nonatomic,readonly) double viewThresholdContent;                                    //@synthesize viewThresholdContent=_viewThresholdContent - In the implementation block
-(void)setExternalAudioSessionControl:(char)arg1 ;
-(void)setInitialMode:(int)arg1 ;
-(int)initialMode;
-(void)setDisableLoggingPlayFromTap:(char)arg1 ;
-(void)setHideActivityIndicator:(char)arg1 ;
-(char)isScribeObserverEnabled;
-(double)secondsToWaitForDynamicAd;
-(char)shouldWaitForDynamicAd;
-(double)viewThresholdContent;
-(char)isVideoValueReportingScribeObserverEnabled;
-(char)isMoatScribeObserverEnabled;
-(char)isVideoTypeEngagementMetadataScribingEnabled;
-(char)externalAudioSessionControl;
-(char)disableLoggingPlayFromTap;
-(char)hideActivityIndicator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end

