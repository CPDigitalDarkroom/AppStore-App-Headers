/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardViewLayoutDelegate.h>

@class TFNTwitterCardStateManager;

@interface T1NativeLeadGenCardFullViewLayoutDelegate : TFNTwitterCardViewLayoutDelegate {

	TFNTwitterCardStateManager* _cardStateManager;

}

@property (nonatomic,retain) TFNTwitterCardStateManager * cardStateManager;              //@synthesize cardStateManager=_cardStateManager - In the implementation block
+(id)sharedLayoutDelegate;
+(id)viewModelWithCardContext:(id)arg1 ;
-(id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2 ;
-(void)layoutSubviewsForCardView:(id)arg1 withState:(id)arg2 ;
-(CGSize)targetImageSizeForViewModel:(id)arg1 contentWidth:(float)arg2 ;
-(void)setCardStateManager:(TFNTwitterCardStateManager *)arg1 ;
-(id)_layoutHelperForViewModel:(id)arg1 ;
-(TFNTwitterCardStateManager *)cardStateManager;
@end

