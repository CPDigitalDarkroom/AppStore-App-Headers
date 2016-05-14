/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:04 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebAppActionViewDelegate;
@class UIButton, UILabel, UIImageView, UIView;

@interface FBWebAppActionView : UIView {

	UIButton* _actionButton;
	UIButton* _dismissButton;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	UIView* _bottomSeparator;
	id<FBWebAppActionViewDelegate> _delegate;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebAppActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)defaultHeight;
-(void)_didTapActionButton:(id)arg1 ;
-(void)_didTapDismissButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 titleLabel:(id)arg2 buttonLabel:(id)arg3 style:(unsigned)arg4 ;
-(float)_separatorThickness;
-(id)initWithFrame:(CGRect)arg1 titleLabel:(id)arg2 subtitleLabel:(id)arg3 buttonLabel:(id)arg4 icon:(id)arg5 style:(unsigned)arg6 ;
-(void)setDelegate:(id<FBWebAppActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBWebAppActionViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

