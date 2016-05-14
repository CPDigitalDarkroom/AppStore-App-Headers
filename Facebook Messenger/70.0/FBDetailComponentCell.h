/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, FBDetailComponentController;

@interface FBDetailComponentCell : UITableViewCell {

	UIImageView* _componentMaskImageView;
	char _widthSensitiveLayout;
	FBDetailComponentController* _componentController;
	UIEdgeInsets _contentEdgeInset;

}

@property (assign,nonatomic) char widthSensitiveLayout;                                             //@synthesize widthSensitiveLayout=_widthSensitiveLayout - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentEdgeInset;                                       //@synthesize contentEdgeInset=_contentEdgeInset - In the implementation block
@property (assign,nonatomic,__weak) FBDetailComponentController * componentController;              //@synthesize componentController=_componentController - In the implementation block
+(UIEdgeInsets)componentMaskImageViewBoundsInset;
-(id)interiorColor;
-(char)widthSensitiveLayout;
-(void)setWidthSensitiveLayout:(char)arg1 ;
-(UIEdgeInsets)contentEdgeInset;
-(FBDetailComponentController *)componentController;
-(void)setComponentController:(FBDetailComponentController *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)borderImage;
@end

