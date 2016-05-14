/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:59 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBUIConfigurable.h>

@protocol FBStackedViewLayout;
@class UIView, NSString;

@interface FBStackedView : UIView <FBUIConfigurable> {

	id<FBStackedViewLayout> _layout;
	UIEdgeInsets _edgeInsets;
	UIView* _backgroundView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(id)defaultFBUIConfig;
+(id)layoutForLayoutType:(unsigned)arg1 ;
+(id)newWithLayoutType:(unsigned)arg1 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(id)_stackableViews;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)applyConfig:(id)arg1 ;
-(id)config;
@end

