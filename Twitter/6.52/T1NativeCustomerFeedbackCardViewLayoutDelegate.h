/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:34 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardViewLayoutDelegate.h>

@interface T1NativeCustomerFeedbackCardViewLayoutDelegate : TFNTwitterCardViewLayoutDelegate {

	CGSize _closeButtonSize;

}

@property (nonatomic,readonly) CGSize closeButtonSize;              //@synthesize closeButtonSize=_closeButtonSize - In the implementation block
+(id)sharedLayoutDelegate;
+(id)viewModelWithCardContext:(id)arg1 ;
-(id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2 ;
-(void)layoutSubviewsForCardView:(id)arg1 withState:(id)arg2 ;
-(float)_layoutRatingView:(id)arg1 forViewModel:(id)arg2 ratingViewMaxWidth:(float)arg3 startOrigin:(CGPoint)arg4 ;
-(CGSize)_sizeForCTAButtonWithTitle:(id)arg1 ;
-(void)_setupViewOrHide:(id)arg1 withFrame:(CGRect)arg2 ;
-(CGSize)closeButtonSize;
-(id)init;
@end

