/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface SPTLyricsNowPlayingViewMissingSyncView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _arrowImageView;

}

@property (nonatomic,retain) UILabel * primaryLabel;                    //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                  //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;              //@synthesize arrowImageView=_arrowImageView - In the implementation block
-(id)setupArrowImage;
-(CGPoint)arrowImageViewCenter;
-(id)setupPrimaryLabel;
-(id)setupSecondaryLabel;
-(CGRect)primaryLabelFrame;
-(CGRect)secondaryLabelFrame;
-(UILabel *)primaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)secondaryLabel;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(UIImageView *)arrowImageView;
-(void)setArrowImageView:(UIImageView *)arg1 ;
-(void)setup;
@end

