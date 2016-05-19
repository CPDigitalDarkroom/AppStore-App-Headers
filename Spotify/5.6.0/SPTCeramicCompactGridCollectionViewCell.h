/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:31 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Spotify/SPTThemableView.h>
#import <Spotify/SPTCeramicCollectionViewCellProtocol.h>
#import <Spotify/SPTCellImageLoadingContextCompatibleCell.h>

@protocol SPTThemableViewLayoutDelegate;
@class UIImageView, UILabel, NSString, UIImage, UIView;

@interface SPTCeramicCompactGridCollectionViewCell : UICollectionViewCell <SPTThemableView, SPTCeramicCollectionViewCellProtocol, SPTCellImageLoadingContextCompatibleCell> {

	id<SPTThemableViewLayoutDelegate> _layoutDelegate;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                               //@synthesize titleLabel=_titleLabel - In the implementation block
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
-(CGSize)imageViewSize;
-(void)populateWithCeramicItem:(id)arg1 order:(SPTCeramicItemOrder)arg2 ;
-(void)setImage:(id)arg1 animated:(char)arg2 ;
-(id<SPTThemableViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<SPTThemableViewLayoutDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(unsigned)cellType;
@end

