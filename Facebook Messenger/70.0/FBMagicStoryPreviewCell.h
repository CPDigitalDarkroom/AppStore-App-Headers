/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol FBMagicStoryPreviewCellDelegate;
@class NSArray, UILabel, FBGradientView, FBUserSession, FBBurstAnimationImageView, NSString;

@interface FBMagicStoryPreviewCell : UICollectionViewCell {

	NSArray* _specifiers;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	FBGradientView* _gradientView;
	FBUserSession* _session;
	FBBurstAnimationImageView* _burstImageView;
	id<FBMagicStoryPreviewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryPreviewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) int currentIndex; 
-(void)setSpecifiers:(id)arg1 withSession:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMagicStoryPreviewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMagicStoryPreviewCellDelegate>)delegate;
-(NSString *)title;
-(int)currentIndex;
-(NSString *)subtitle;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setCurrentIndex:(int)arg1 ;
@end

