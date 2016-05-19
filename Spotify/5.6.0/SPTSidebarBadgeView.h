/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>
#import <Spotify/SPTThemableView.h>

@protocol SPTThemableViewLayoutDelegate;
@class UILabel, NSString;

@interface SPTSidebarBadgeView : UIView <SPTThemableView> {

	char _highlighted;
	id<SPTThemableViewLayoutDelegate> layoutDelegate;
	unsigned _value;
	UILabel* _label;

}

@property (assign,getter=isHighlighted,nonatomic) char highlighted;                                //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) unsigned value;                                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                      //@synthesize label=_label - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 
-(void)applyThemeLayout;
-(id)labelTextForValue:(unsigned)arg1 ;
-(id<SPTThemableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SPTThemableViewLayoutDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

