/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardViewLayoutDelegate.h>
#import <Twitter/T1NativeBasicAppCardTargetImageSizeLayoutDelegate.h>

@class NSString;

@interface T1NativeBasicAppCardForwardViewLayoutDelegate : TFNTwitterCardViewLayoutDelegate <T1NativeBasicAppCardTargetImageSizeLayoutDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLayoutDelegate;
+(id)viewModelWithCardContext:(id)arg1 ;
+(CGSize)_avatarImageSize;
+(float)_maximumWidthForStandardLayout;
+(float)_highlightViewPadding;
+(id)_titleFont;
+(id)_subtitleFont;
-(id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2 ;
-(void)layoutSubviewsForCardView:(id)arg1 withState:(id)arg2 ;
-(CGSize)targetImageSizeForViewModel:(id)arg1 layoutMetrics:(id)arg2 ;
-(float)_layoutAttribution:(id)arg1 forNativeCardViewModel:(id)arg2 layoutMetrics:(id)arg3 atPoint:(CGPoint)arg4 ;
-(float)_layoutImageNextToInfoAndAction:(id)arg1 forNativeCardViewModel:(id)arg2 layoutMetrics:(id)arg3 atPoint:(CGPoint)arg4 ;
-(CGSize)_titleSizeForNativeCardViewModel:(id)arg1 ;
-(CGSize)_detailTextSizeForNativeCardViewModel:(id)arg1 ;
-(CGSize)_callToActionSizeForNativeCardViewModel:(id)arg1 ;
-(CGRect)_layoutDetailsForLayoutState:(id)arg1 viewModel:(id)arg2 layoutMetrics:(id)arg3 atPoint:(CGPoint)arg4 ;
-(id)titleFontForWidth:(float)arg1 ;
-(id)titleColorForWidth:(float)arg1 ;
@end

