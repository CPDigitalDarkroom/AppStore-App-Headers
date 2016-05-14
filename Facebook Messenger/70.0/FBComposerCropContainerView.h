/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBPhotoCropInfo, FBCropConstraintView, UIView;

@interface FBComposerCropContainerView : UIView {

	UIImageView* _imageView;
	FBPhotoCropInfo* _cropInfo;
	FBCropConstraintView* _cropConstraintView;
	UIView* _privacyMessageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) FBPhotoCropInfo * cropInfo;                             //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,retain) FBCropConstraintView * cropConstraintView;              //@synthesize cropConstraintView=_cropConstraintView - In the implementation block
@property (nonatomic,retain) UIView * privacyMessageView;                            //@synthesize privacyMessageView=_privacyMessageView - In the implementation block
-(FBPhotoCropInfo *)cropInfo;
-(CGSize)maxImageSizeForImageOrientation:(int)arg1 ;
-(CGRect)constraintFrameFromCropInfo:(id)arg1 ;
-(void)_resetLayout;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 cropInfo:(id)arg3 style:(unsigned)arg4 privacyMessageView:(id)arg5 ;
-(void)setCropInfo:(FBPhotoCropInfo *)arg1 ;
-(FBCropConstraintView *)cropConstraintView;
-(void)setCropConstraintView:(FBCropConstraintView *)arg1 ;
-(UIView *)privacyMessageView;
-(void)setPrivacyMessageView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

