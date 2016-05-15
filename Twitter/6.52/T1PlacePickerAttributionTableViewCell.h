/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNTableViewCell.h>

@class UIImageView, UILabel, UIView, UIImage, NSString;

@interface T1PlacePickerAttributionTableViewCell : TFNTableViewCell {

	UIImageView* _attributionImageView;
	UILabel* _attributionLabel;
	UIView* _attributionContainerView;
	UIEdgeInsets _attributionImageInsets;

}

@property (nonatomic,retain) UIImageView * attributionImageView;                 //@synthesize attributionImageView=_attributionImageView - In the implementation block
@property (nonatomic,retain) UILabel * attributionLabel;                         //@synthesize attributionLabel=_attributionLabel - In the implementation block
@property (nonatomic,retain) UIView * attributionContainerView;                  //@synthesize attributionContainerView=_attributionContainerView - In the implementation block
@property (nonatomic,retain) UIImage * attributionImage; 
@property (assign,nonatomic) UIEdgeInsets attributionImageInsets;                //@synthesize attributionImageInsets=_attributionImageInsets - In the implementation block
@property (nonatomic,copy) NSString * attributionText; 
@property (nonatomic,copy) NSString * attributionAccessibilityText; 
-(UILabel *)attributionLabel;
-(NSString *)attributionText;
-(NSString *)attributionAccessibilityText;
-(UIEdgeInsets)attributionImageInsets;
-(void)setAttributionImageInsets:(UIEdgeInsets)arg1 ;
-(void)setAttributionText:(NSString *)arg1 ;
-(void)setAttributionAccessibilityText:(NSString *)arg1 ;
-(UIView *)attributionContainerView;
-(void)setAttributionLabel:(UILabel *)arg1 ;
-(void)setAttributionContainerView:(UIView *)arg1 ;
-(UIImage *)attributionImage;
-(UIImageView *)attributionImageView;
-(void)setAttributionImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setAttributionImage:(UIImage *)arg1 ;
@end

