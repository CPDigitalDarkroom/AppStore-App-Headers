/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:07 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UINavigationBar.h>

@protocol FBNavigationBarLayoutDelegate;
@class UIView;

@interface FBNavigationBar : UINavigationBar {

	UIView* _shadowView;
	float _shadowViewOverlap;
	int _preferredStatusBarStyle;
	id<FBNavigationBarLayoutDelegate> _layoutDelegate;

}

@property (nonatomic,retain) UIView * shadowView;                                                  //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic) float shadowViewOverlap;                                              //@synthesize shadowViewOverlap=_shadowViewOverlap - In the implementation block
@property (assign,nonatomic) int preferredStatusBarStyle;                                          //@synthesize preferredStatusBarStyle=_preferredStatusBarStyle - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)setShadowViewOverlap:(float)arg1 ;
-(float)shadowViewOverlap;
-(id<FBNavigationBarLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<FBNavigationBarLayoutDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)layoutSubviews;
-(int)preferredStatusBarStyle;
-(void)setShadowImage:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3 ;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
-(void)setPreferredStatusBarStyle:(int)arg1 ;
@end

