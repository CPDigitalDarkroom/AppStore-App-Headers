/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:44 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBActionSheetButtonDelegate.h>

@class NSMutableArray, FBActionSheetButtonMetrics, NSArray, FBPopoverActionSheet, UIView, NSString;

@interface FBActionSheetContentView : UIView <FBActionSheetButtonDelegate> {

	NSMutableArray* _currentButtons;
	FBActionSheetButtonMetrics* _metrics;
	NSArray* _buttonItems;
	FBPopoverActionSheet* _popoverActionSheet;

}

@property (nonatomic,copy) NSArray * buttonItems;                                           //@synthesize buttonItems=_buttonItems - In the implementation block
@property (nonatomic,readonly) UIView * selectedButton; 
@property (assign,nonatomic,__weak) FBPopoverActionSheet * popoverActionSheet;              //@synthesize popoverActionSheet=_popoverActionSheet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBPopoverActionSheet *)popoverActionSheet;
-(void)setPopoverActionSheet:(FBPopoverActionSheet *)arg1 ;
-(char)shouldSelectActionSheetButton:(id)arg1 ;
-(void)invalidateFontSize;
-(id)initWithFrame:(CGRect)arg1 metrics:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityIdentifier;
-(NSArray *)buttonItems;
-(void)setButtonItems:(NSArray *)arg1 ;
-(id)buttonAtIndex:(unsigned)arg1 ;
-(UIView *)selectedButton;
@end

