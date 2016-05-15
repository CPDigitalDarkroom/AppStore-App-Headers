/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TFNTwitterCardViewDelegate;
#import <Twitter/Twitter-Structs.h>
@class TFNTwitterCardView, T1NativeDynamicProductAdCardViewModel;

@interface T1NativeDynamicProductAdCardViewEventRegistry : NSObject {

	TFNTwitterCardView* _view;
	id<TFNTwitterCardViewDelegate> _delegate;
	T1NativeDynamicProductAdCardViewModel* _viewModel;

}

@property (nonatomic,__weak,readonly) TFNTwitterCardView * view;                             //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<TFNTwitterCardViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) T1NativeDynamicProductAdCardViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(void)didTapTitle:(id)arg1 ;
-(void)didTapPrice:(id)arg1 ;
-(void)didTapDomainUrl:(id)arg1 ;
-(void)didTapCallToAction:(id)arg1 event:(id)arg2 ;
-(void)didTapImage:(id)arg1 ;
-(void)didTapBackground:(id)arg1 ;
-(void)_didTap:(id)arg1 eventPoint:(CGPoint)arg2 eventType:(id)arg3 elementType:(int)arg4 ;
-(void)registerTitleHighlightView:(id)arg1 ;
-(void)registerPriceHighlightView:(id)arg1 ;
-(void)registerDomainHighlightView:(id)arg1 ;
-(void)registerCallToActionButton:(id)arg1 ;
-(void)registerImageHighlightView:(id)arg1 ;
-(void)registerCardBackgroundHighlightView:(id)arg1 ;
-(T1NativeDynamicProductAdCardViewModel *)viewModel;
-(void)setViewModel:(T1NativeDynamicProductAdCardViewModel *)arg1 ;
-(void)setDelegate:(id<TFNTwitterCardViewDelegate>)arg1 ;
-(id)init;
-(id<TFNTwitterCardViewDelegate>)delegate;
-(TFNTwitterCardView *)view;
-(id)initWithView:(id)arg1 ;
@end

