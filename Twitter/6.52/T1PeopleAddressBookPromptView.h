/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <TFNUI/TFNLayoutMetricsEnvironment.h>

@class UILabel, UIButton, TFNAttributedTextView, TFNStackView, NSLayoutConstraint, NSString;

@interface T1PeopleAddressBookPromptView : UIView <TFNLayoutMetricsEnvironment> {

	UILabel* _titleLabel;
	UIButton* _okButton;
	UIButton* _cancelButton;
	TFNAttributedTextView* _disclaimerTextView;
	TFNStackView* _stackView;
	NSLayoutConstraint* _rightContentEdgeInsetConstraint;
	NSLayoutConstraint* _bottomContentEdgeInsetConstraint;
	NSLayoutConstraint* _leftContentEdgeInsetConstraint;

}

@property (nonatomic,readonly) TFNStackView * stackView;                                           //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * rightContentEdgeInsetConstraint;               //@synthesize rightContentEdgeInsetConstraint=_rightContentEdgeInsetConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomContentEdgeInsetConstraint;              //@synthesize bottomContentEdgeInsetConstraint=_bottomContentEdgeInsetConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * leftContentEdgeInsetConstraint;                //@synthesize leftContentEdgeInsetConstraint=_leftContentEdgeInsetConstraint - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * okButton;                                                //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                                            //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) TFNAttributedTextView * disclaimerTextView;                         //@synthesize disclaimerTextView=_disclaimerTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TFNAttributedTextView *)disclaimerTextView;
-(NSLayoutConstraint *)leftContentEdgeInsetConstraint;
-(NSLayoutConstraint *)rightContentEdgeInsetConstraint;
-(NSLayoutConstraint *)bottomContentEdgeInsetConstraint;
-(void)layoutMetricsDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIButton *)cancelButton;
-(void)updateConstraints;
-(TFNStackView *)stackView;
-(UIButton *)okButton;
@end

