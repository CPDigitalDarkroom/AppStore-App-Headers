/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@protocol T1SearchTextViewDelegate;
@class T1SearchTextField, UIImageView, UIButton, UIView, UITapGestureRecognizer, NSString;

@interface T1SearchTextView : UIView {

	char _sportsThemeEnabled;
	char _centered;
	T1SearchTextField* _textField;
	id<T1SearchTextViewDelegate> _delegate;
	float _textFieldMaxWidth;
	int _clearButtonMode;
	UIImageView* _backgroundImageView;
	UIButton* _clearButton;
	UIView* _fadeTextView;
	UIButton* _filtersButton;
	UITapGestureRecognizer* _tapGestureRecognizer;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;                                //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIButton * clearButton;                                           //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,retain) UIView * fadeTextView;                                            //@synthesize fadeTextView=_fadeTextView - In the implementation block
@property (nonatomic,retain) UIButton * filtersButton;                                         //@synthesize filtersButton=_filtersButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                    //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) T1SearchTextField * textField;                                  //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic,__weak) id<T1SearchTextViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float textFieldMaxWidth;                                          //@synthesize textFieldMaxWidth=_textFieldMaxWidth - In the implementation block
@property (assign,getter=isSportsThemeEnabled,nonatomic) char sportsThemeEnabled;              //@synthesize sportsThemeEnabled=_sportsThemeEnabled - In the implementation block
@property (assign,nonatomic) int clearButtonMode;                                              //@synthesize clearButtonMode=_clearButtonMode - In the implementation block
@property (assign,getter=isFilterButtonHidden,nonatomic) char filterButtonHidden; 
@property (assign,nonatomic) char centered;                                                    //@synthesize centered=_centered - In the implementation block
-(void)_setupFadeView:(char)arg1 ;
-(void)_setClearButtonImage;
-(void)_setFiltersButtonImage;
-(void)_filtersButtonTapped;
-(void)_tap:(id)arg1 ;
-(void)_layoutTextField;
-(CGRect)_textFieldFrameInCompleteMode;
-(CGRect)_textFieldFrameInEditMode;
-(UIView *)fadeTextView;
-(UIButton *)filtersButton;
-(CGRect)_nonCenterTextFieldFrame;
-(CGRect)_centeredTextFieldFrame;
-(void)setCentered:(char)arg1 animated:(char)arg2 ;
-(void)_transitionToCompletedMode:(char)arg1 ;
-(void)_transitionToEditMode:(char)arg1 ;
-(void)setTextFieldMaxWidth:(float)arg1 ;
-(void)setFilterButtonHidden:(char)arg1 ;
-(char)isFilterButtonHidden;
-(float)textFieldMaxWidth;
-(char)isSportsThemeEnabled;
-(void)setSportsThemeEnabled:(char)arg1 ;
-(void)setClearButton:(UIButton *)arg1 ;
-(void)setFadeTextView:(UIView *)arg1 ;
-(void)setFiltersButton:(UIButton *)arg1 ;
-(void)_updateClearButton;
-(void)_clearButtonTapped;
-(void)textFieldDidChange:(id)arg1 ;
-(char)centered;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<T1SearchTextViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<T1SearchTextViewDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(UIImageView *)backgroundImageView;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(T1SearchTextField *)textField;
-(void)setClearButtonMode:(int)arg1 ;
-(id)accessibilityHint;
-(int)clearButtonMode;
-(UIButton *)clearButton;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setCentered:(char)arg1 ;
@end

