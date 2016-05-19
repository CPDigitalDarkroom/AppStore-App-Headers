/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Spotify/SPTCeramicCollectionViewCellProtocol.h>

@protocol SPTThemableViewLayoutDelegate;
@class UIView, UILabel, SPTTheme, NSString;

@interface SPTCeramicTextOnlyViewCell : UICollectionViewCell <SPTCeramicCollectionViewCellProtocol> {

	id<SPTThemableViewLayoutDelegate> _layoutDelegate;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	UILabel* _textView;
	SPTTheme* _theme;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIView * topSeparatorView;                                            //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparatorView;                                         //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) UILabel * textView;                                                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) SPTTheme * theme;                                                     //@synthesize theme=_theme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,readonly) unsigned cellType; 
@property (nonatomic,readonly) CGSize imageViewSize; 
@property (nonatomic,retain) UIView * prefixView; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (nonatomic,retain) UIView * touchPreviewView; 
-(void)applyThemeLayout;
-(void)populateWithCeramicItem:(id)arg1 order:(SPTCeramicItemOrder)arg2 ;
-(void)setupTextView;
-(void)setupTopSeparatorView;
-(void)setupBottomSeparatorView;
-(void)setImage:(id)arg1 animated:(char)arg2 ;
-(id<SPTThemableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SPTThemableViewLayoutDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setTextView:(UILabel *)arg1 ;
-(UIView *)topSeparatorView;
-(UILabel *)textView;
-(void)setTopSeparatorView:(UIView *)arg1 ;
-(UIView *)bottomSeparatorView;
-(void)setBottomSeparatorView:(UIView *)arg1 ;
-(SPTTheme *)theme;
-(void)setTheme:(SPTTheme *)arg1 ;
-(unsigned)cellType;
-(void)setupView;
@end

