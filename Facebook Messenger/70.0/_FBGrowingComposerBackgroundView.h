/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _FBGrowingComposerBackgroundView : UIView {

	UIView* _backgroundView;
	UIView* _visibleBackgroundView;
	UIView* _dividerView;
	UIView* _highlightView;
	unsigned _style;
	unsigned _dividerStyle;
	UIEdgeInsets _layoutInsets;

}

@property (assign,nonatomic) char dividerHidden; 
@property (assign,nonatomic) unsigned dividerStyle;                  //@synthesize dividerStyle=_dividerStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutInsets;              //@synthesize layoutInsets=_layoutInsets - In the implementation block
-(char)dividerHidden;
-(void)setDividerHidden:(char)arg1 ;
-(void)setDividerStyle:(unsigned)arg1 ;
-(unsigned)dividerStyle;
-(UIEdgeInsets)layoutInsets;
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned)arg2 ;
-(float)dividerHeight;
@end

