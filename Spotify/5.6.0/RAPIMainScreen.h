/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/RAPIScreen.h>
#import <Spotify/IDViewDelegate.h>

@class IDToolbarButton, RAPIMainScreenConfig, MainScreenView, NSTimer, UIImage, NSDate, NSString;

@interface RAPIMainScreen : RAPIScreen <IDViewDelegate> {

	int toolbarButtonTargets[8];
	IDToolbarButton* toolbarButtons[8];
	char lastSetToolbarButtonHoverable[8];
	char lastSetToolbarButtonClickable[8];
	char _progressBarVisible;
	char _calmModeEnabled;
	char _statusMessageShown;
	RAPIMainScreenConfig* _config;
	float _imageCompressionFactor;
	MainScreenView* _mainScreenView;
	NSTimer* _calmModeTimer;
	UIImage* _lastCoverArt;
	NSDate* _lastSetCoverArtTime;

}

@property (retain) RAPIMainScreenConfig * config;                   //@synthesize config=_config - In the implementation block
@property (assign,nonatomic) char progressBarVisible;               //@synthesize progressBarVisible=_progressBarVisible - In the implementation block
@property (assign) float imageCompressionFactor;                    //@synthesize imageCompressionFactor=_imageCompressionFactor - In the implementation block
@property (retain) MainScreenView * mainScreenView;                 //@synthesize mainScreenView=_mainScreenView - In the implementation block
@property (assign) char calmModeEnabled;                            //@synthesize calmModeEnabled=_calmModeEnabled - In the implementation block
@property (__weak) NSTimer * calmModeTimer;                         //@synthesize calmModeTimer=_calmModeTimer - In the implementation block
@property (retain) UIImage * lastCoverArt;                          //@synthesize lastCoverArt=_lastCoverArt - In the implementation block
@property (retain) NSDate * lastSetCoverArtTime;                    //@synthesize lastSetCoverArtTime=_lastSetCoverArtTime - In the implementation block
@property (assign) char statusMessageShown;                         //@synthesize statusMessageShown=_statusMessageShown - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMainScreenView:(MainScreenView *)arg1 ;
-(void)setCalmModeEnabled:(char)arg1 ;
-(void)setProgressBarVisible:(char)arg1 ;
-(void)setStatusMessageShown:(char)arg1 ;
-(void)setImageCompressionFactor:(float)arg1 ;
-(MainScreenView *)mainScreenView;
-(void)toolbarButtonPressed:(id)arg1 ;
-(void)toolbarButtonHovered:(id)arg1 ;
-(void)updateProgressBarVisibility;
-(char)progressBarVisible;
-(char)statusMessageShown;
-(char)calmModeEnabled;
-(void)setLastCoverArt:(UIImage *)arg1 ;
-(void)setLastCoverArtImmediately;
-(UIImage *)lastCoverArt;
-(NSDate *)lastSetCoverArtTime;
-(float)imageCompressionFactor;
-(void)setLastSetCoverArtTime:(NSDate *)arg1 ;
-(void)toolbarButtonPressedWithIndex:(int)arg1 ;
-(void)restartCalmModeTimer;
-(void)enableCalmMode;
-(void)setToolbarButtonHoverable:(char)arg1 clickable:(char)arg2 forButton:(int)arg3 ;
-(void)disableCalmModeTimer;
-(id)initWithView:(id)arg1 andConfig:(id)arg2 andContext:(id)arg3 ;
-(id)getScreenDelegate;
-(void)initializeVehicleDependentImages;
-(void)setCurrentTrackProgress:(float)arg1 ;
-(void)setTotalTrackTime:(int)arg1 ;
-(void)setCurrentTrackTime:(int)arg1 ;
-(void)setCoverArt:(id)arg1 ;
-(void)updateCoverArt;
-(void)setToolbarTooltip:(id)arg1 forButton:(int)arg2 ;
-(void)setToolbarImage:(int)arg1 forButton:(int)arg2 ;
-(void)setToolbarTargetScreen:(int)arg1 forButton:(int)arg2 ;
-(void)handleCalmModeTimer;
-(void)disableCalmMode;
-(void)showStatusMessage:(id)arg1 displayProgressIndicator:(char)arg2 forScreen:(int)arg3 ;
-(void)hideStatusMessageForScreen:(int)arg1 ;
-(void)onViewAppeared;
-(void)onFocusGained:(int)arg1 ;
-(void)onFocusLost;
-(NSTimer *)calmModeTimer;
-(void)setCalmModeTimer:(NSTimer *)arg1 ;
-(void)setAlbumName:(id)arg1 ;
-(RAPIMainScreenConfig *)config;
-(void)setConfig:(RAPIMainScreenConfig *)arg1 ;
-(void)setTrackName:(id)arg1 ;
-(void)setArtistName:(id)arg1 ;
@end

