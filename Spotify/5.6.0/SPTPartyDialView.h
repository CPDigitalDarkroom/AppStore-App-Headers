/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:41 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SPTPartyDialViewDelegate;
@class SPTPartyMoodView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, CALayer, UIImageView, CAShapeLayer, NSString;

@interface SPTPartyDialView : UIView <UIGestureRecognizerDelegate> {

	int _dialDirection;
	id<SPTPartyDialViewDelegate> _delegate;
	SPTPartyMoodView* _moodView;
	UIPanGestureRecognizer* _panRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	UIView* _selector;
	CALayer* _selectorHandleLayer;
	UIImageView* _selectorBackground;
	CAShapeLayer* _buttonCircle;

}

@property (assign,nonatomic) int dialDirection;                                         //@synthesize dialDirection=_dialDirection - In the implementation block
@property (assign,nonatomic,__weak) id<SPTPartyDialViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SPTPartyMoodView * moodView;                               //@synthesize moodView=_moodView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panRecognizer;                    //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                    //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIView * selector;                                         //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) CALayer * selectorHandleLayer;                             //@synthesize selectorHandleLayer=_selectorHandleLayer - In the implementation block
@property (nonatomic,retain) UIImageView * selectorBackground;                          //@synthesize selectorBackground=_selectorBackground - In the implementation block
@property (nonatomic,retain) CAShapeLayer * buttonCircle;                               //@synthesize buttonCircle=_buttonCircle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDialDirection:(int)arg1 animated:(char)arg2 silent:(char)arg3 ;
-(int)dialDirection;
-(SPTPartyMoodView *)moodView;
-(void)gesture:(id)arg1 ;
-(UIImageView *)selectorBackground;
-(void)setSelectorBackground:(UIImageView *)arg1 ;
-(void)setSelectorHandleLayer:(CALayer *)arg1 ;
-(CALayer *)selectorHandleLayer;
-(float)radiansForPanLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setDialDirection:(int)arg1 ;
-(void)setupSelectorLayerIfNeeded;
-(void)setMoodView:(SPTPartyMoodView *)arg1 ;
-(CAShapeLayer *)buttonCircle;
-(void)setButtonCircle:(CAShapeLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SPTPartyDialViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SPTPartyDialViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setSelector:(UIView *)arg1 ;
-(UIView *)selector;
-(UIPanGestureRecognizer *)panRecognizer;
-(void)setPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
@end

