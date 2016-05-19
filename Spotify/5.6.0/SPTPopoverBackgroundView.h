/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIPopoverBackgroundView.h>

@class SPTArrowPopoverView, UIView;

@interface SPTPopoverBackgroundView : UIPopoverBackgroundView {

	float _arrowOffset;
	SPTArrowPopoverView* _arrowView;
	UIView* _dimmingView;

}

@property (nonatomic,retain) SPTArrowPopoverView * arrowView;              //@synthesize arrowView=_arrowView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                         //@synthesize dimmingView=_dimmingView - In the implementation block
+(char)wantsDefaultContentAppearance;
+(float)arrowHeight;
+(float)arrowBase;
+(UIEdgeInsets)contentViewInsets;
-(void)adjustDimmingViewFrame;
-(SPTArrowPopoverView *)arrowView;
-(void)setArrowView:(SPTArrowPopoverView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(UIView *)dimmingView;
-(unsigned)arrowDirection;
-(void)setArrowDirection:(unsigned)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)setArrowOffset:(float)arg1 ;
-(float)arrowOffset;
@end

