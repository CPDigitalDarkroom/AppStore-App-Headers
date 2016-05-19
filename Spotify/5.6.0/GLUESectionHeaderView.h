/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <Spotify/GLUEStatefulItem.h>
#import <Spotify/GLUEStyleable.h>

@class GLUELabel, GLUESectionHeaderStyle, SPTLayoutConstraintBuilder, GLUEStatefulView, NSString;

@interface GLUESectionHeaderView : UICollectionReusableView <GLUEStatefulItem, GLUEStyleable> {

	char _interactable;
	GLUELabel* _titleLabel;
	GLUELabel* _subtitleLabel;
	GLUESectionHeaderStyle* _style;
	SPTLayoutConstraintBuilder* _layout;
	GLUEStatefulView* _contentView;

}

@property (nonatomic,readonly) GLUELabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) GLUELabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,getter=isInteractable,nonatomic) char interactable;              //@synthesize interactable=_interactable - In the implementation block
@property (nonatomic,copy) GLUESectionHeaderStyle * style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) SPTLayoutConstraintBuilder * layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) GLUEStatefulView * contentView;                     //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned state; 
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (assign,getter=isDisabled,nonatomic) char disabled; 
@property (assign,getter=isSelected,nonatomic) char selected; 
@property (assign,getter=isActive,nonatomic) char active; 
-(void)glue_applyStyle:(id)arg1 ;
-(void)removeViewConstraints;
-(void)replaceViewConstraints;
-(void)applyStateStyle:(id)arg1 ;
-(id)createLayoutConstraints;
-(void)addViewConstraintsIfNeeded;
-(void)updateStateBasedStyle;
-(char)isInteractable;
-(void)setInteractable:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned)state;
-(char)isActive;
-(GLUESectionHeaderStyle *)style;
-(GLUEStatefulView *)contentView;
-(id)accessibilityLabel;
-(void)setStyle:(GLUESectionHeaderStyle *)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(GLUELabel *)titleLabel;
-(char)isHighlighted;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(SPTLayoutConstraintBuilder *)layout;
-(GLUELabel *)subtitleLabel;
-(void)setActive:(char)arg1 ;
-(void)setLayout:(SPTLayoutConstraintBuilder *)arg1 ;
-(void)setDisabled:(char)arg1 ;
-(id)accessibilityHint;
-(char)shouldGroupAccessibilityChildren;
-(char)isDisabled;
@end

