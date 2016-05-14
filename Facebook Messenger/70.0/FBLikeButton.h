/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface FBLikeButton : UIButton {

	UIImage* _iconImageNormal;
	UIImage* _iconImageSelected;
	UIImageView* _iconImageView;

}
-(void)_initializeContent;
-(void)_updateIconForState;
-(CGSize)_sizeWithTitleSize:(CGSize)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForHeight:(float)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForContentHeight:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end

