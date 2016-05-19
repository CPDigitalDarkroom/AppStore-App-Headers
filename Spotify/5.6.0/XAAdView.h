/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <Spotify/XAAdContainerDelegate.h>

@protocol XAAdViewDelegate;
@class NSString, NSArray, XAAdRequest, UIImage, NSURL, UIProgressView, UILabel, XAAdContainer, NSObject, XAAdImage;

@interface XAAdView : UIView <XAAdContainerDelegate> {

	char _expired;
	char _availableForDisplay;
	char _statusbarHidden;
	NSString* _adName;
	NSArray* _actions;
	NSString* _impressionId;
	XAAdRequest* _request;
	UIImage* _image;
	NSURL* _imageURL;
	NSString* _nowPlayingText;
	UIProgressView* _durationProgressView;
	float _durationProgressViewWidth;
	float _durationProgressViewVertialPosition;
	UILabel* _elapsedTimeLabel;
	UILabel* _remainingTimeLabel;
	XAAdContainer* _adContainer;
	NSObject*<XAAdViewDelegate> _delegate;
	XAAdImage* _adImage;

}

@property (nonatomic,retain,readonly) NSString * adName;                         //@synthesize adName=_adName - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                                //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain,readonly) NSString * impressionId;                   //@synthesize impressionId=_impressionId - In the implementation block
@property (nonatomic,retain) XAAdRequest * request;                              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char expired;                                     //@synthesize expired=_expired - In the implementation block
@property (nonatomic,readonly) char availableForDisplay;                         //@synthesize availableForDisplay=_availableForDisplay - In the implementation block
@property (nonatomic,readonly) char displayed; 
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * nowPlayingText;                          //@synthesize nowPlayingText=_nowPlayingText - In the implementation block
@property (nonatomic,retain) UIProgressView * durationProgressView;              //@synthesize durationProgressView=_durationProgressView - In the implementation block
@property (assign) float durationProgressViewWidth;                              //@synthesize durationProgressViewWidth=_durationProgressViewWidth - In the implementation block
@property (assign) float durationProgressViewVertialPosition;                    //@synthesize durationProgressViewVertialPosition=_durationProgressViewVertialPosition - In the implementation block
@property (nonatomic,retain) UILabel * elapsedTimeLabel;                         //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;                       //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,retain,readonly) XAAdContainer * adContainer;               //@synthesize adContainer=_adContainer - In the implementation block
@property (assign,nonatomic) NSObject*<XAAdViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) XAAdImage * adImage;                                //@synthesize adImage=_adImage - In the implementation block
@property (assign,nonatomic) char statusbarHidden;                               //@synthesize statusbarHidden=_statusbarHidden - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewTapped:(id)arg1 ;
-(void)viewSwiped:(id)arg1 ;
-(void)setupContainer;
-(XAAdContainer *)adContainer;
-(CGRect)determineDurationProgressViewFrame:(id)arg1 containingFrame:(CGRect)arg2 ;
-(float)durationProgressViewWidth;
-(float)durationProgressViewVertialPosition;
-(id)convertToMinutesAndSeconds:(double)arg1 ;
-(NSString *)impressionId;
-(void)setDurationProgressView:(UIProgressView *)arg1 ;
-(char)availableForDisplay;
-(void)setDurationProgressViewWidth:(float)arg1 ;
-(void)setDurationProgressViewVertialPosition:(float)arg1 ;
-(char)statusbarHidden;
-(void)setStatusbarHidden:(char)arg1 ;
-(void)updateRemainingTime:(double)arg1 ;
-(void)displayWithAnimation:(char)arg1 ;
-(NSString *)nowPlayingText;
-(id)initWithAdName:(id)arg1 impressionId:(id)arg2 adImage:(id)arg3 nowPlayingText:(id)arg4 actions:(id)arg5 ;
-(void)setAdImage:(XAAdImage *)arg1 ;
-(XAAdImage *)adImage;
-(void)updateAdImage:(id)arg1 ;
-(void)setAvailableForDisplay:(char)arg1 ;
-(UIProgressView *)durationProgressView;
-(void)updateElapsedTime:(double)arg1 ;
-(void)displayCancelButton;
-(void)onExpansionAudio;
-(void)onRecording;
-(void)updateDecibels:(float)arg1 ;
-(void)onFinishedRecording;
-(char)isEqualToAd:(id)arg1 ;
-(void)setNowPlayingText:(NSString *)arg1 ;
-(NSString *)adName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(NSObject*<XAAdViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSObject*<XAAdViewDelegate>)delegate;
-(NSArray *)actions;
-(XAAdRequest *)request;
-(void)reset;
-(UIImage *)image;
-(char)displayed;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(UILabel *)elapsedTimeLabel;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(UILabel *)remainingTimeLabel;
-(void)setRequest:(XAAdRequest *)arg1 ;
-(char)expired;
-(void)cancelButtonTapped;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

