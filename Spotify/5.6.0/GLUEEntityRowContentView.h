/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <Spotify/GLUEEntityRowContent.h>

@class GLUELabel, GLUEEntityRowContentStyle, SPTLayoutConstraintBuilder, NSString;

@interface GLUEEntityRowContentView : UIView <GLUEEntityRowContent> {

	GLUELabel* _titleLabel;
	GLUELabel* _subtitleLabel;
	SPTLayoutConstraintBuilder* _layout;
	GLUEEntityRowContentStyle* _style;

}

@property (nonatomic,retain) SPTLayoutConstraintBuilder * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,copy) GLUEEntityRowContentStyle * style;                  //@synthesize style=_style - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GLUELabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) GLUELabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(void)glue_applyStyle:(id)arg1 ;
-(void)addViewConstraints;
-(void)removeViewConstraints;
-(id)createContentLayoutConstraints;
-(void)replaceViewConstraints;
-(id)accessibilityTextForTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)setupLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(GLUEEntityRowContentStyle *)style;
-(id)accessibilityLabel;
-(void)setStyle:(GLUEEntityRowContentStyle *)arg1 ;
-(GLUELabel *)titleLabel;
-(SPTLayoutConstraintBuilder *)layout;
-(GLUELabel *)subtitleLabel;
-(void)setLayout:(SPTLayoutConstraintBuilder *)arg1 ;
-(id)accessibilityHint;
-(char)shouldGroupAccessibilityChildren;
@end

